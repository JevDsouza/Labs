import java. util. Scanner;
class w{
public static void main(String args[])	  {
char bit,l;
int x=0;
String s;
Scanner in= new Scanner(System.in);
System. out. println("Enter a string");
s = in. nextLine();
System. out. println("You entered string "+s);
bit=s.charAt(0);
l=s.charAt(s.length());
System. out. println("Length: " +s.length());
for(int i = 0; i < s.length(); i++) {
s.replace(s.charAt(0),s.charAt(s.length()));
}
System. out. println(s);}}