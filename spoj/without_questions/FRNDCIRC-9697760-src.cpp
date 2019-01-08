//lovelotus

#include<cstdio>
#include<cstdlib>
#include<map>
#include<cstring>
#include<string>
#include<iostream>
using namespace std;
string frnd1,frnd2;
map<string,int> m;
// map m stores the count of the person, their numbering
int friends[100001],parent[100001];

int find_root_parent(int kid)
{
    if(parent[kid]==kid) return kid;
    else parent[kid]=(find_root_parent(parent[kid]));
    return parent[kid];
}

int main()
{
    int t,i,n,cnt,ans,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        cnt=1;
        ans=0;
        m.clear();
        //memset(parents,-1,sizeof(parents));
        memset(friends,0,sizeof(friends));
        while(n--)
        {
            cin>> frnd1 >>frnd2;
            //scanf("%s %s",frnd1.c_str(),frnd2.c_str());
            x=m[frnd1];
            y=m[frnd2];
            if(x==0 && y==0)// both have no frnds yet
            {
                m[frnd1]=cnt;
                m[frnd2]=cnt+1;
                parent[cnt]=parent[cnt+1]=cnt;
                friends[cnt]=2;
                ans=friends[cnt];
                cnt+=2;
            }
            else if(x==0)//y has friends already , x is new
            {
                x=m[frnd1]=cnt;
                int v=find_root_parent(y);
                parent[x]=v;
                friends[v]++;
                ans=friends[v];
                cnt++;
            }
            else if(y==0)// x has frnds already, y is new
            {
                y=m[frnd2]=cnt;
                int v=find_root_parent(x);
                parent[y]=v;
                friends[v]++;
                ans=friends[v];
                cnt++;
            }
            else // both have a circle
            {
                int v1=find_root_parent(x);
                int v2=find_root_parent(y);
                if(v1==v2)// both have same circle
                {
                    ans=friends[v1];
                }
                else// both have different frnd circle
                {
                    int val=friends[v1]+friends[v2];
                    ans=val;
                    parent[v1]=v2;
                    friends[v2]=val;
                }
            }
            printf("%d\n",ans);
        }
    }
    return 0;
}
