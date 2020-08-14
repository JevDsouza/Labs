import java.util.*;
public class prime {
public static void main(String[] args) {
Scanner in= new Scanner(System.in);
int m=in.nextInt();
int n=in.nextInt();
for(int i=m;i<n;i++)
{
int c=0;
for(int j=2;j<=i/2;j++)
{
if(i%j==0)
{
 c=1;
}
}
if(c==0)
System.out.println(i);
}
}
}