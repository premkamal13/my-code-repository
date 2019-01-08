#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char s[301],key[11];
int l,len,i,j,cnt,k;
int dp1[11][501],dp2[11][501],flag;

void check()
{
    int p,q;
    printf("\ndp1->\n");
    for(p=0;dp1[p][0];p++)
    {
        for(q=0;q<len;q++)
        {
            printf("%c ",dp1[p][q]);
        }
        printf("\n");
    }
    printf("\ndp2->\n");
    for(p=0;p<=i;p++)
    {
        for(q=0;q<len;q++)
        {
            printf("%c ",dp2[p][q]);
        }
        printf("\n");
    }
}

void store()
{
    i=j=cnt=0;
    while(cnt<l)
    {
        dp1[i][j]=s[cnt++];
        if(cnt==l) break;
        if(flag) dp2[i][j]=s[cnt++];
        j++;
        if(j==len)
        {
            j=0;
            i++;
        }
        flag=1-flag;
    }
    //check();
}

void paint(int q)
{
    int x;
    for(x=0;dp1[x][q];x++)
    {
        printf("%c",dp1[x][q]);
        if(dp2[x][q]) printf("%c",dp2[x][q]);
    }
}

void result()
{
    int st=1,p,q;
    for(p=0;p<len;p++)
    {
        for(q=0;q<len;q++)
        {

            if(key[q]-48==st)
            break;
        }
        //printf("key %d: value: %c\n",q,key[q]);
        paint(q);st++;
    }
}

void start()
{
    flag=1;
    k=0;i=j=0;
    store();
    result();
    printf("\n");
}

void init()
{
    len=strlen(key);
    l=strlen(s);
    memset(dp1,0,sizeof(dp1));
    memset(dp2,0,sizeof(dp2));
}

int main()
{
    while(scanf("%s",key)!=EOF)
    {
        scanf("%s",s);
        init();
        start();
    }
    return 0;
}
