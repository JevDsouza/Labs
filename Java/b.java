import java.util.Scanner;
class b
{public static void main(String args[])
{ Scanner sc= new Scanner (System.in);
int n,s=0;
System.out.println("Enter the number you want in");
n=sc.nextInt();
for(int i=1;i<=n;i++)
s=i*i+s;
System.out.println(+s);}}

