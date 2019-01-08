import java.io.*;
import java.util.Scanner;

class factorialzeroes
{
public static void main(String args[])
{
Scanner in=new Scanner(System.in);
int t=in.nextInt();
while(t!=0)
{
int n,i=5,a;
n=in.nextInt();
a=0;
while(n>0)
{
n=n/i;
a+=n;
}
System.out.printf("%d\n",a);
t--;
}
}
}