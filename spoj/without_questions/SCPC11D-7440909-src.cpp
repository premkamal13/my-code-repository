#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[3];
    int i;
    for(i=0;i<3;i++)
    {
        scanf("%d",&arr[i]);
    }
    while(arr[0]!=0||arr[1]!=0||arr[2]!=0)
    {
        int a,b,c;
        sort(arr,arr+3);
        if(arr[0]+arr[1]<arr[2]){
            printf("wrong");
        }
        else{
            a=arr[0]*arr[0];
            b=arr[1]*arr[1];
            c=arr[2]*arr[2];
            if(a+b==c){
                printf("right\n");
            }
            else{
                printf("wrong\n");
            }
        }
        for(i=0;i<3;i++)
        {
            scanf("%d",&arr[i]);
        }
 
 
    }
}
