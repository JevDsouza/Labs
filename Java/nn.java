import java.util.Scanner;
class nn
{public static void main(String args[]){
int i,j,n,k=1;
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
for ( i=0;i<n;i++)
{for ( j=0;j<n;j++)
{if (a[i][j]!=a[j][i])
k=0;}}
if(k==0)
{System.out.print("noolol");}
else 
System.out.print("yeslol");}}