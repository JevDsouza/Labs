import java.util.*;
import java.lang.Math;
public class four 
{
public static void main (String[] args)
{
Scanner in=new Scanner(System.in);
System.out.println("Rows1?");
int m1=in.nextInt();
System.out.println("Columns1?");
int n1=in.nextInt();
System.out.println("Rows2?");
int m2=in.nextInt();
System.out.println("Columns2?");
int n2=in.nextInt();
int a[][]=new int[100][100];
int b[][]=new int[100][100];
int c[][]=new int[100][100];
int i,j,k,z=0;
if(n1==m2)
{
System.out.println("Matrix 1");
for(i=0;i<m1;i++)
{
for(j=0;j<n1;j++)	
{
a[i][j]=in.nextInt();	
}}
System.out.println("Matrix 2");
for(i=0;i<m2;i++)
{
for(j=0;j<n2;j++)	
{
b[i][j]=in.nextInt();	
}}
for(i=0;i<n2;i++)
{
for(j=0;j<m1;j++)	
{
for(k=0;k<n1;k++)
{
z = z + a[i][k]*b[k][j];
System.out.println(z);
}
c[i][j]=z;
z=0;
}}
System.out.println("Matrix 3");
for(i=0;i<n2;i++)
{
for(j=0;j<m1;j++)	
{
System.out.print(c[i][j]);
}
System.out.println(" ");
}
}
else
System.out.println("Invalid");
}}