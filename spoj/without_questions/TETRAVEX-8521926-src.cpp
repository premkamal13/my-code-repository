#include<cstdlib>
#include<cctype>
#include<cstdio>
#include<algorithm>
#include<string>
#include<iostream>
using namespace std;

int index[9];
int tile[10][4];

int check()
{
    if(
       (tile[index[0]][1]==tile[index[1]][3])&&
       (tile[index[0]][2]==tile[index[3]][0])&&
       (tile[index[1]][1]==tile[index[2]][3])&&
       (tile[index[1]][2]==tile[index[4]][0])&&
       (tile[index[2]][2]==tile[index[5]][0])&&
       (tile[index[3]][1]==tile[index[4]][3])&&
       (tile[index[3]][2]==tile[index[6]][0])&&
       (tile[index[4]][1]==tile[index[5]][3])&&
       (tile[index[4]][2]==tile[index[7]][0])&&
       (tile[index[5]][2]==tile[index[8]][0])&&
       (tile[index[6]][1]==tile[index[7]][3])&&
       (tile[index[7]][1]==tile[index[8]][3])
       )return 1;
    else return 0;

}
int j,k,l,m;
int p,s;
int main()
{
    int i,t;
    scanf("%d",&t);
    s=1;
    while(t--)
    {
        for(i=0;i<9;i++) index[i]=i;
        for(i=0;i<9;i++)
        {
            scanf("%d %d %d %d",&j,&k,&l,&m);
            tile[i][0]=j;
            tile[i][1]=k;
            tile[i][2]=l;
            tile[i][3]=m;
            /*temp=tile[i][3];
            tile[i][3]=tile[i][1];
            tile[i][1]=temp;*/
        }
        printf("Case %d: ",s++);
        if(check()) printf("YES\n");
        else
        {
            p=0;
           while(next_permutation(index,index+9))
            {
                if(check()) {p=1;break;}
                //printf("ololo\n");
                //for(i=0;i<9;i++) printf("%d",index[i]+1);
            }
            if(p==1) printf("YES\n");
            else printf("NO\n");
        }
        /*
        for(i=0;i<9;i++) printf("%d",index[i]+1);
        printf("\n");*/
    }
    return 0;
}
