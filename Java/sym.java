import java.util.*;
import java.lang.Math;
public class sym
{
public static void main (String[] args)
{
Scanner in=new Scanner(System.in);
System.out.println("Rows?");
int m=in.nextInt();
System.out.println("Columns?");
int n=in.nextInt();
int a[][]=new int[100][100];
int i,j,k=10,sum;
if(m==n)
{
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)	
{
a[i][j]=in.nextInt();	
}}
k=1;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)	
{
if(a[i][j]!=a[j][i])
{
k=0;
}}}}
else 
System.out.println("Invalid");
if(k==1)
System.out.println("Symmetric");
else if(k==0)
System.out.println("Not Symmetric");
}}