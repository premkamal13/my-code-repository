#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
char s[51][51];
int visited[51];
int main()
{
    int i,j,k,maxm,cnt,x,m,t,pos;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",s[0]);
        x=strlen(s[0]);
        i=1;
        maxm=0;
        pos=0;
        while(i<x) {scanf("%s",s[i]);i++;}
        for(i=0;i<x;i++)
        {
            for(k=0;k<x;k++) visited[k]=0;
            cnt=0;
            visited[i]=1;
            for(j=0;j<x;j++)
            {
                if(s[i][j]=='Y')
                {
                    visited[j]=1;
                }
            }
            for(j=0;j<x;j++)
            {
                if(s[i][j]=='Y')
                {
                    for(m=0;m<x;m++)
                    {
                        if(s[j][m]=='Y' && (!visited[m]))
                        {
                            cnt++;
                            visited[m]=1;
                        }
                    }
                }
            }
            if(cnt>maxm) {maxm=cnt; pos=i;}
        }
        printf("%d %d\n",pos,maxm);
    }
    return 0;
}
