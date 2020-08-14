import java.util.*;
class u
{ public static void main(String args[])
  { Scanner sc=new Scanner(System.in);
int s,l;
System.out.println("a no");
l=sc.nextInt();
int a[]=new int[l];
for(int i=0;i<l;i++)
a[i]=sc.nextInt();
System.out.println("req no");
s=sc.nextInt();
int z=0,k=0;
for (int i:a)
{z++;
if(i==s){ System.out.println("at"+z);
k=1;}
}
if(k==0)
{System.out.println("Not found");}}}
 