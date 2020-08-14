import java.util.Scanner;
class Em
{public static void main(String[] args) { int c=0;

System.out.println("Main");
Scanner sc=new Scanner(System.in);
System.out.println("The string: ");
String s= sc.nextLine();
System.out.println("Your String :" +s);
s=s.toLowerCase();
for(int i=0; i<s.length(); i++)
{if (s[i]=='a')
  c++}
  System.out.println("The number of times a has occurred: " +c);
  System.out.println("Replacing b in place of a: "+ s.replace('a','b'));
  System.out.println("last char");
  char j=s.charAt(s.length());

System.out.println("Replacing first w last" +s.replace(s.charAt(0),j));



}

}
