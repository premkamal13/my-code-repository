#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<algorithm>
#include<iostream>


using namespace std;

int count1[1011][26];
char str[1011][251],s1[10];
int strorder[1011];
int n,i,j,k,x,temp;

bool sort1(int i1, int j1)
{
    int k1;
    for(k1=0;k1<26;k1++)
    {
        if( count1[i1][k1] > count1[j1][k1] ) return true;
        else if( count1[i1][k1] < count1[j1][k1] ) return false;
    }
    k1=i1<j1?i1:j1;
    return k;
}

int main()
{
    int p=1,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        gets(s1);
        for(i=0;i<n;i++)
        {
            for(j=0;j<26;j++)
            {
                count1[i][j]=0;
            }
            gets(str[i]);
            x=strlen(str[i]);
            for(j=0;j<x;j++)
            {
                //printf("step-1\n");
                if (isalpha(str[i][j]))
                {
                    //printf("step-2\n");
                    if(isupper(str[i][j]))
                    {
                        count1[i][(tolower(str[i][j])-'a')]++;
                    }
                    else count1[i][str[i][j]-'a']++;
                }
                //printf("step-2\n");
            }
        }
        //printf("ololo");
        for(i=0;i<n;i++) strorder[i]=i;
        sort(strorder,strorder+n,sort1);
        printf("case: %d\n",p++);
        for(i=0;i<n;i++)
        {
            printf("%s\n",str[strorder[i]]);
        }
    }
    return 0;
}
