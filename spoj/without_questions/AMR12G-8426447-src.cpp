#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;

int main()
{
    int t,n,m,k,i,j,p,cnt[101],x1,y1,z1,x[101],y[101],z[101],s;
    char str[101];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&n,&m,&k);
        for(i=0;i<n;i++)
        {
            scanf("%s",str);
            //x=strlen(str);
            p=0;
            for(j=0;j<m;j++)
            {
                if(str[j]=='*') {p++;}
            }
            cnt[i]=p;
        }
        x1=y1=z1=0;
        for(i=0;i<n;i++)
        {
            if(m%2==0)
            {
                if(cnt[i]==m/2) {x[x1++]=cnt[i];}
                else if(cnt[i]<m/2){y[y1++]=cnt[i];}
                else {z[z1++]=cnt[i];}
            }
            else
            {
                if(cnt[i]<(m+1)/2) {y[y1++]=cnt[i];}
                else {z[z1++]=cnt[i];}
            }
        }
            sort(x,x+x1);
            sort(y,y+y1);
            sort(z,z+z1);
            i=0;
            if(y1>0)
            {
                while(i<y1)
                    {
                        if(k==0) break;
                        else
                        {
                            y[i]=m-y[i];
                            i++;
                            k--;
                        }
                    }
            }
            if((k%2!=0)&&(k!=0))
            {
                     if(x1>0)
                        {
                            k=0;
                        }
                     else
                        {
                            sort(y,y+y1);
                            if(z1>0&&y1>0&&z[0]<y[0])
                                {
                                    z[0]=m-z[0];k=0;
                                }
                            else if(y1>0)
                                {
                                    y[0]=m-y[0];
                                }
                            else {z[0]=m-z[0];}
                        }
            }
            s=0;
            for(i=0;i<x1;i++) s+=x[i]; //printf("<%d>1\n",x[i]);}
            for(i=0;i<y1;i++) s+=y[i]; //printf("<%d>2\n",y[i]);}
            for(i=0;i<z1;i++) s+=z[i]; //printf("<%d>3\n",z[i]);}
            printf("%d\n",s);
    }
    return 0;
}
