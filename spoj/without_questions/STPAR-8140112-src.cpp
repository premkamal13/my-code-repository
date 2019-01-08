#include <cstdio>
int main()
{
        int stack[1024];
        for(int n; scanf("%d", &n) && n; )
        {
                int top = 0, w = 1, z;
                bool ok = true;
                for(int i = 0; i < n; ++i)
                {
                        scanf("%d", &z);
                        if(z != w)
                        {
                                while(top && stack[top - 1] == w) ++w, --top;
                                if(!top || stack[top - 1] > z) stack[top++] = z;
                                else {ok = false;}
                        }
                        else ++w;
                }
               if(ok) printf("yes\n");
               else printf("no\n");
        }
        return 0;
}
