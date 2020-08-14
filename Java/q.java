import java.util.*;
class q
{ public static void main(String args[])
  { Scanner sc=new Scanner(System.in);
int m,n,i,j;
System.out.println("p no");
m=sc.nextInt();
n=sc.nextInt();
for(i=m;i<=n;i++)
{int c=0;
for(j=2;j<=i/2;j++)
{if(i%j==0)
{c=1;}}
if(c==0)
System.out.println(i);}
}}
