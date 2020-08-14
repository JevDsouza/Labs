import java.util.*;
public class arr1
{
public static void main(String args[])
{
Scanner in= new Scanner(System.in);
System.out.println("enter number of elements");
int n=in.nextInt();
int arr[]=new int[n];
System.out.println("enter elements");
for(int i=0;i<n;i++)
arr[i]=in.nextInt();
System.out.println("Search?");
int num=in.nextInt();
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