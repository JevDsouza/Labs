import java.util.*;
public class Arr
{
public static void main(String args[])
{
Scanner in= new Scanner(System.in);
System.out.println("enter number of elements");
int n=sc.nextInt();
int arr[]=new int[n];
System.out.println("enter elements");
for(int i=0;i<n;i++)
arr[i]=sc.nextInt();
System.out.println("Search?");
int num=sc.nextInt();
int k=0;
int z=0;
for(int i:arr)
{
z++;
if(i==num)
{
System.out.println("Found at" + z);
k=1;
}
}
if(k==0)
System.out.println("Not Found");
}
}