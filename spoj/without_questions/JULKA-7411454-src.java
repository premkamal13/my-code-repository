import java.io.*;
import java.math.*;
import java.util.*;

class julka
{
public static void main(String args[]) throws IOException
{
BufferedReader c=new BufferedReader(new InputStreamReader(System.in));
for(int i=0;i<10;i++)
{
String a=c.readLine();
String b=c.readLine();
BigInteger kc= new BigInteger(a);
kc= kc.add(new BigInteger(b));
BigInteger d= new BigInteger(a);
d= d.subtract(new BigInteger(b));
kc=kc.divide(new BigInteger("2"));
System.out.println(kc);
d=d.divide(new BigInteger("2"));
System.out.println(d);
}
}
} 