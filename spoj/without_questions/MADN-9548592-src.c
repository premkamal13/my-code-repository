#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int cmp(const void *i,const void *j)
{
    return (*(char *)i-*(char *)j);
}

char vow[5]={'A','U','E','O','I'};
char cons[21]={'J','S','B','K','T','C','L','D','M','V','N','W','F','X','G','P','Y','H','Q','Z','R'};
char even[255],odd[255];
int main()
{
    int t,tst=1,k1,k2,v1,c1,i,n,l1,l2;
    scanf("%d",&t);
    while(t--)
    {
        k1=k2=0;
        scanf("%d",&n);
        v1=c1=0;
        printf("Case %d: ",tst++);
        for(i=0;i<n;i++)
        {
            if(i&1)
            {
                odd[k1++]=cons[c1/5];
                c1++;
            }
            else
            {
                even[k2++]=vow[v1/21];
                v1++;
            }
        }
        qsort(even,k2,sizeof(even[0]),cmp);
        qsort(odd,k1,sizeof(odd[0]),cmp);
        //printf("\n");
        //for(l1=0;l1<k1;l1++) printf("%c",odd[l1]); printf("\n");
        //for(l2=0;l2<k2;l2++) printf("%c",even[l2]); printf("\n\n");

        i=l1=l2=0;
        while(i<n)
        {
            printf("%c",even[l1++]);
            i++;
            if(i>=n) break;
            printf("%c",odd[l2++]);
            i++;
        }
        printf("\n");
    }
    return 0;
}
