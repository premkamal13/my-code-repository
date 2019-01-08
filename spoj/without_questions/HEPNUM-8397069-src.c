#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char a[100001],b[100001];

int check()
{
    int i,j,x,y,la,lb;
    i=j=0;
        la=strlen(a);
        lb=strlen(b);
        while(a[i]=='0')
        {
            i++;
        }
        while(b[j]=='0')
        {
            j++;
        }
        //i--;j--;
        //printf("<<%d %d>>\n",i,j);
        x=la-i-1;
        y=lb-j-1;
        //printf("<%d %d>\n",x,y);
        if(x>y) return 1;
        else if(x<y) return 2;
        else
        {
            while(i<la)
            {
                if(a[i]>b[j]) return 1;
                else if(a[i]<b[j]) return 2;
                i++;j++;
            }
            return 3;
        }
}

int main()
{
    int p;
    while(scanf("%s",a),a[0]!='*')
    {
        scanf("%s",b);
        p=check();
        if(p==1) printf(">\n");
        else if(p==2) printf("<\n");
        else printf("=\n");
    }
    return 0;
}
