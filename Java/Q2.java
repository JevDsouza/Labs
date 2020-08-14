import java.util.Scanner;

/**
 *
 * @author student
 */
public class Q2 {
    public static void main(String args[])
    {
        Scanner sc= new Scanner(System.in);
        int a[]=new int[10]; int x=0; int g=0;
        System.out.println("Enter the string");
        String s=sc.nextLine(); 
         System.out.println("Enter the word");
        String s1= sc.nextLine();
        int l=s.length();
        String s3="";
        for(int i=0;i<l-1;i++)
        {
            for(int j=i+1;j<l;j++)
            {
                int p=0;
                if(s.charAt(i)==s.charAt(j)){
                    if(p==0){a[x]=i; x++;}
                    a[x]=j;x++;p++;
                }                   
            }
        }
        for(int i=0;i<l;i++)
        { g=0;
            for(int j=0;j<x;j++)
            {
                if(i==a[j])
                {s3=s3+s1;g=1;}
            }
                if(g==0)
                {s3=s3+s.charAt(i);}
        }
        
        System.out.println(s3);
    }
}