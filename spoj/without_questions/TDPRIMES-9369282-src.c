//BITWISE SEIVE

#include <stdio.h>
#define max 100000000
#define sqt 10000

int flag[max>>6];

#define is_composite(x) (flag[x>>6]&(1<<((x>>1)&31)))
#define set_composite(x) (flag[x>>6]|=(1<<((x>>1)&31)))

void sieve()
{
	int i, j, k;
	for(i=3; i<sqt; i+=2)
		if(!is_composite(i))
			for(j=i*i,k=i<<1; j<max; j+=k)
				set_composite(j);
	j =0;
	printf("2\n");
	for(i=3; i<max; i+=2)
	{
		if(!is_composite(i))
		{
			j++;
			if(j==100)
			{
				printf("%d\n", i);
				j=0;
			}
		}
	}
}

int main()
{
	sieve();
	return 0;
}
