#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(void){char a[5000];int k=0,i,x,t,j;scanf("%d\n",&t);
while(t--){gets(a);i=-1;x=strlen(a);while(i<x-1){j=a[++i];
if(j==32);else if(j<70) k=j-54;else if(j<74) k=j-49;else if(j<76) k=j-50; else if(j<81) k=j-45;else if(j<86) k=j-40;else if(j<91) k=j-35;  if(j!=32) printf("%d ",k);}printf("\n");}}

