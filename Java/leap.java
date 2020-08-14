import java.util.*;
class leap
{public static void main(String args[])
{
Scanner sc= new Scanner (System.in);
int year;
System.out.println("Enter the year to be checked");
year=sc.nextInt();
boolean b= false;
if (year%4!=0)
{b= false;
System.out.println("Not a Leap year");
}
else if (year%100!=0)
{
b= true;
System.out.println("The year is leap year" +b);
}
else if (year%400!=0)
{
b=false;
System.out.println("leap year");
}}}