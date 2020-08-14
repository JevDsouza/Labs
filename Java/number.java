import java.util.Scanner;
class number
{
public static void main (String args[])
{
int array[]= new int[10];
int p;int o;int n;
p=0; 
o=0;
n=0;
Scanner.sc= newScanner(System.in);
System.out.println("Enter number ");
for (int i=0; i<10; i++)
{array[i]= sc.nextInt();
}
for(int i=0; i<10; i++)
{
if(array[i]>0)
p++;
else if (array[i]<0)
n++;
else if( array[i]==0)
o++;
}
System.out.println("Number of positive"+p);
System.out.println("Number of negative"+n);
System.out.println("Number of 0s"+o);
}}