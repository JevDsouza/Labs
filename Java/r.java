import java.lang.Math;
import java.util.Scanner;
class r
{
  public static void main(String args[])
  { Scanner sc=new Scanner(System.in);
int n,t,i,s=0,j=0;
System.out.println("Enter the num");
n=sc.nextInt();

System.out.println("The number of digits are");
i=n;
while(i!=0)
{i=i/10;
j++;}
System.out.println(+j);
t=n;
while(t!=0)
{s=s+(int)Math.pow((t%10),j);
 t=t/10;}
if(s==n)
System.out.println("ARMM");
else 
System.out.println("nooo");}}