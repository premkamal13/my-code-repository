#include<stdio.h>
#include<cstdlib>
#include<vector>

using namespace std;

char pat[301][301],str[2001][2001];
int prow,pcol,srow,scol;
int check(int i,int j)
{
    int p,q,err=0;
    for(p=0;p<prow;p++)
    {
        for(q=0;q<pcol;q++)
        {
            if(pat[p][q]!=str[i+p][j+q])
            {
                err=1; break;
            }
        }
        if(err) break;
    }
    if(err) return 0;
    return 1;
}

int main()
{
    int i,j,l1,l2,match;
    scanf("%d %d",&prow,&pcol);
    for(i=0;i<prow;i++) scanf("%s",pat[i]);
    scanf("%d %d",&srow,&scol);
    for(i=0;i<srow;i++) scanf("%s",str[i]);
    match=0;
    l1=srow-prow;
    for(i=0;i<=l1;i++)
    {
        l2=scol-pcol;
        for(j=0;j<=l2;j++)
        {
            //printf("%d %d | ",i,j);
            if(check(i,j))
            {
                printf("(%d,%d)\n",i+1,j+1);
                match=1;
            }
        }
    }
    if(!match) printf("NO MATCH FOUND...\n");
    return 0;
}
