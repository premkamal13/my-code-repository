#include<stdio.h>
typedef long LL;
int main()
{
    LL i, j, N;
    int test;
    scanf("%d", &test);
    while (test--) {
 scanf("%d", &N);
 LL a[N];
 LL LS[N];
 LL largest;
 for (i = 0; i < N; i++)
     scanf("%ld", &a[i]);
 
 
 
 for (i = 0; i < N; i++) {
     LS[i] = 1;
     for (j = 0; j < i; j++) {
  if (LS[i] <= LS[j] && a[i] == (a[j] + 1))
      LS[i] = LS[j] + 1;
     }
 }
 largest = 0;
 for (i = 0; i < N; i++) {
     if (LS[i] > largest)
  largest = LS[i];
 }
 
 printf("%ld\n", N - largest);
    }
 
 
    return 0;
}