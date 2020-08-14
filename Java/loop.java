import java.util.*;
public class loop {
public static void main(String[] args) {
Scanner in=new Scanner(System.in);
int n=in.nextInt();
for(int i=1;i<=n;i++)
{
for(int j=1;j<=i;j++)
{
System.out.print(" " +i);
}
System.out.println(" ");    
}
}	
}