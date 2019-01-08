#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define lli long long int

//map<char,int> m;
int m[257];
char s[101];
int main()
{
    int t,k,p=1,x,i;
    scanf("%d",&t);
    while(t--)
        {
            //m.clear();
            memset(m,0,sizeof(m));
            scanf("%s",s);
            x=strlen(s);
            m[s[0]]=1;
            i=1;
            k=2;
            while(s[i]==s[i-1] && i<x) i++;
            if(i<x)
            {
                m[s[i]]=-1;
                k=2;
            }
            i++;
            for(;i<x;i++)
            {
                if(!m[s[i]])
                {
                    m[s[i]]=k++;
                }
            }
            lli sum=0;
            for(i=0;i<x;i++)
            {
                if(m[s[i]]>0)
                sum=sum*k+(lli)m[s[i]];
                else sum=sum*k;
                //printf("%lld %d\n",sum,m[s[i]]);
            }
            printf("Case #%d: %lld\n",p++,sum);
    }
    return 0;
}
