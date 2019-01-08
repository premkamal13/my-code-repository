#include<cstdlib>
#include<cctype>
#include<cstdio>
#include<algorithm>
#include<string>
#include<iostream>
using namespace std;

int index[9];
string tile[10];
char temp;

int check()
{
    return(
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
       );

}

int main()
{
    int i,t;
    scanf("%d",&t);
    while(t--)
    {
        for(i=0;i<9;i++) index[i]=i;
        for(i=0;i<9;i++)
        {
            cin >> tile[i];
            /*temp=tile[i][3];
            tile[i][3]=tile[i][1];
            tile[i][1]=temp;*/
        }
        if(check()) printf("123456789\n");
        else
        {
            while(next_permutation(index,index+9))
            {
                if(check()) break;
                //printf("ololo\n");
                //for(i=0;i<9;i++) printf("%d",index[i]+1);
            }
        }
        for(i=0;i<9;i++) printf("%d",index[i]+1);
        printf("\n");
    }
    return 0;
}
