import java.util.*;
import java.lang.Math;
public class five
{
public static void main (String[] args)
{
Scanner in=new Scanner(System.in);
System.out.println("Rows?");
int m=in.nextInt();
System.out.println("Columns?");
int n=in.nextInt();
int a[][]=new int[100][100];
int i,j,sum1=0,sum2=0,sum3=0,k=0;
if(m==n)
{
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)	
{
a[i][j]=in.nextInt();	
}}
for(i=0;i<m;i++)
{
sum1=sum1+a[i][i];
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)	
{
sum2 = sum2 + a[i][j];
}
if(sum2!=sum1)
{
k=1;
}
sum2=0;
}
for(j=0;i<m;i++)
{
for(i=0;j<n;j++)	
{
sum3 = sum3 + a[i][j];
}
if(sum3!=sum2)
{
k=1;
}
sum3=0;
}
}
else
System.out.println("Invalid");
if(k==0)
System.out.println("Magic");
else if(k==1)
System.out.println("No Magic");
}}