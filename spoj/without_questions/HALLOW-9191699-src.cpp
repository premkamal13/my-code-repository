#include<cstdio>
#include<cstdlib>
#include<map>
#define int_max 10000001
using namespace std;

int a[100001],p=0;
map<int,int> m;


int main()
{
    int n,ch,i,s,k,st,end;
    while(scanf("%d %d",&ch,&n),ch!=0 && n!=0)
    {
        p=0;
        m.clear();
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        k=0;
        for(i=1;i<=n;i++)
        {
            k+=a[i];
            k=k%ch;
            if(k==0) {st=1; end=i; break;}
            if(m[k])
            {
                    st=m[k]+1;
                    end=i;
                    break;
            }
            m[k]=i;
        }
        for(i=st;i<end;i++) printf("%d ",i);
    printf("%d\n",i);
        //if(!p) printf("no sweets\n");
    }
    return 0;
}
