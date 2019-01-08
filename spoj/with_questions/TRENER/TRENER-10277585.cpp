#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

int hash[257];
char s[51];
int main()
{
    int i,n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",s);
        hash[s[0]]++;
    }
    int f=0;
    for(i=0;i<257;i++)
    {
        if(hash[i]>4) {f=1; printf("%c",i);}
    }
    if(!f) printf("PREDAJA");
    printf("\n");
    return 0;
}
