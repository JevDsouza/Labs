import java.util.Scanner;
class nnn
{public static void main(String args[]){
int i,j,n;
int sum=0;
Scanner sc=new Scanner (System.in);
System.out.println("The size bitch?");
n=sc.nextInt();
int a[][]= new int[n][n];
for ( i=0;i<n;i++)
{for ( j=0;j<n;j++)
a[i][j]=sc.nextInt();}
for ( i=0;i<n;i++)
{for ( j=0;j<n;j++)
System.out.print(a[i][j]+"\t");
System.out.println(" ");}
System.out.println("Elements of dia ");
for ( i=0;i<n;i++)
{for ( j=0;j<n;j++)
{if(j==(n-i-1))
{System.out.println(a[i][j]+" ");
sum=sum+a[i][j];}
}}
System.out.println("sum"+sum);}}
