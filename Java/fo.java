import java. util. Scanner;
class fo{
public static void main(String args[])	  {
char bit= 'a';
int x=0;
String s;
Scanner in= new Scanner(System.in);
System. out. println("Enter a string");
s = in. nextLine();
System. out. println("You entered string "+s);
System. out. println("Length: " +s.length());
for(int i = 0; i < s.length(); i++) {
    if (s.charAt(i) == bit) {
        x++;
s.replace('a','b');
    }
}

System. out. println(s.replace('a','b'));
System. out. println(+x);}}
