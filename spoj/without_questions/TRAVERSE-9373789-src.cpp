 #include<cstdio>
 #include<cstdlib>
 #include<queue>
 #define pii pair<int,int>
 #define F first
 #define S second
 #define piii pair<int,pii>
 using namespace std;
 char s[20][20];
 int n,cnt=0;

 int valid(int x,int y,int z)
 {
     if(!z) return 0;
     if(x<0 || x>=n || y<0 || y>=n) return 0;
     return 1;
 }

 void bfs(int i,int j)
 {
     queue<pii>q;
     int k;
     q.push(pii(i,j));
     while(!q.empty())
     {
         pii x=q.front();
         i=x.F;
         j=x.S;
         q.pop();
         if(i==n-1 && j==n-1) cnt++;
         k=s[i][j]-48;
         if(valid(i+k,j,k)) q.push(pii(i+k,j));
         if(valid(i,j+k,k)) q.push(pii(i,j+k));
     }
 }

 int main()
 {
     int i;
     scanf("%d",&n);
     for(i=0;i<n;i++)
     scanf("%s",s[i]);
     bfs(0,0);
     printf("%d",cnt);
 }
