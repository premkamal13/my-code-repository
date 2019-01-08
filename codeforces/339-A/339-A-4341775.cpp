#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
using namespace std;
char s[1001];
int a[101];
int main()
{
    int i,j,x;
    scanf("%s",s);
    x=strlen(s);
    j=0;
    for(i=0;i<x;i+=2)
    {
            a[j++]=s[i]-48;
    }
    sort(a,a+j);
    for(i=0;i<j-1;i++)
    {
        printf("%d+",a[i]);
    }
    printf("%d\n",a[i]);
    return 0;
}