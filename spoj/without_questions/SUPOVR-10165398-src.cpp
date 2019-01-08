#include<cstdio>
#include<cstdlib>
int b[5],turn[3];
int main()
{
    char x,y;
    int cnt,tt,f,val,i;
    cnt=0;
    turn[0]=1,turn[1]=2;
    tt=0;f=0;
    while(cnt<6)
    {
        scanf("%c%c",&x,&y);
        if(x=='W' || x=='N') continue;
        else if(x=='O')
        {
            if(f) break;
            f=1;
            turn[tt]=3;
            cnt++;
        }
        else
        {
            b[turn[tt]]+=(x-48);
            if(x&1) tt=1-tt;
            cnt++;
        }
    }
    for(i=1;i<=3;i++) printf("%d\n",b[i]);
    return 0;
}
