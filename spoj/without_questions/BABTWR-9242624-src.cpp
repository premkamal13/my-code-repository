#include<cstdio>
#include<cstdlib>
#include<algorithm>

using namespace std;

struct box
{
    int h,w,d;
};
//typedef struct box box;

box arr[101];
box rot[301];
box temp;
int msh[301];

int min(int a,int b)
{
    return (a<b?a:b);
}

int max(int a,int b)
{
    return (a>b?a:b);
}

void sortit(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(rot[i].d*rot[i].w <rot[j].d*rot[j].w)
            {
                temp=rot[i];
                rot[i]=rot[j];
                rot[j]=temp;
            }
        }
    }
}
/*
int cmp(const void *i,const void *j)
{
    return (((* (box *)j).d) * ((* (box *)j).w))-(((*(box *)i).d) * ((*(box *)i).w));
}
*/
/*
int cmp(box i,box j)
{
    return ( ((j.d)*(j.w)) - ((i.d)*(i.w)));
}*/

int boxstack(int n)
{
    int index=0,i,j,maxm;
    for(i=0;i<n;i++)
    {
        rot[index]=arr[i];
        index++;
        rot[index].h=arr[i].w;
        rot[index].d=max(arr[i].h,arr[i].d);
        rot[index].w=min(arr[i].h,arr[i].d);
        index++;
        rot[index].h=arr[i].d;
        rot[index].d=max(arr[i].h,arr[i].w);
        rot[index].w=min(arr[i].h,arr[i].w);
        index++;
    }
    n=3*n;
    //qsort(rot,n,sizeof(rot[0]),cmp);
    //sort(rot,rot+n,cmp);
    sortit(n);
    for(i=0;i<n;i++) msh[i]=rot[i].h;
    for(int i=1 ; i<n ; i++)
      {
        for(int j=0 ; j<i ; j++)
         {
            if(rot[i].w < rot[j].w && rot[i].d < rot[j].d && msh[i] < msh[j] + rot[i].h)
            {
                msh[i] = msh[j] + rot[i].h;
            }
         }
      }
    maxm=msh[0];
    for(i=1;i<n;i++)
    {
        maxm=max(maxm,msh[i]);
    }
    return maxm;
}

int main()
{
     //freopen("C:\\Users\\lovelotus\\Desktop\\input.txt","r",stdin);
    //freopen("C:\\Users\\lovelotus\\Desktop\\output.txt","w",stdout);
    int n,i;
    while(scanf("%d",&n),n!=0)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d %d %d",&arr[i].h,&arr[i].w,&arr[i].d);
            int t;
            if(arr[i].w>arr[i].d)
            {
                t=arr[i].w;
                arr[i].w=arr[i].d;
                arr[i].d=t;
            }
        }
        printf("%d\n",boxstack(n));
    }
    return 0;
}
