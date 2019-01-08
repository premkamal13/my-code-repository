#include<stdio.h>
#include<stdlib.h>

#include<algorithm>
#include<iostream>

using namespace std;


int x[1001],y[1001];
int main()
{
    int t,i,n,j,k,s,c,p1,p2,m,l1,l2;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&m,&n);
        for(i=0;i<m-1;i++) scanf("%d",&x[i]);
        sort(x,x+i);
        for(i=0;i<n-1;i++) scanf("%d",&y[i]);
        sort(y,y+i);
        l1=m-2;
        l2=n-2;
        p1=p2=1;
        c=0;
        s=0;
        while(c<m+n-2)
        {
            if(l1>=0 && l2>=0)
            {
                if(x[l1]==y[l2])
                {
                    if(p1>p2)
                    {
                        s+=p1*y[l2]; l2--;
                        p2++;
                    }
                    else
                    {
                        s+=p2*x[l1]; l1--;
                        p1++;
                    }
                    c++;
                }
                else if(x[l1]>y[l2])
                {
                    s+=x[l1]*p2;p1++;c++; l1--;
                }
                else
                {
                    s+=y[l2]*p1; l2--;
                    p2++;c++;
                }
            }
            else
            {
                while(l1>=0) {s+=x[l1]*p2;l1--; c++;}
                while(l2>=0) {s+=y[l2]*p1;l2--; c++;}
            }
        }
            printf("%d\n",s);
    }
    return 0;
}
