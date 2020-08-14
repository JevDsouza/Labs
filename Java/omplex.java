import java.util.Scanner;
class Complex{
    int re, im, sre, sim;
    void getdata(){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Real Part of Complex Number:- ");
        re = sc.nextInt();
        System.out.print("Enter Imaginary Part of Complex Number:- ");
        im = sc.nextInt();
    }
void add(int l, Complex c)
{ System.out.print(c.re+l+" "+ (c.im) +"i");

}
void add(Complex c1, Complex c)
{ System.out.print((c1.re+c.re)+" "+ (c.im+c1.im)+" i");

}}
public class omplex {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Complex c = new Complex();
        Complex c1 = new Complex();
 Complex sum = new Complex();
 char ans;
        do{
        System.out.println("1. Non - Complex + Complex");
        System.out.println("2. Complex + Complex");
        System.out.print("Enter Choice:- ");
        int ch = sc.nextInt();
        switch(ch){
            case 1:int l;
                    c1.getdata();
                    System.out.print("Enter Real Number:- ");
                   l= sc.nextInt();
                sum.add(l,c);
  break;
            case 2: 
System.out.println("Complex Number 1");
                    c1.getdata();
                    System.out.println("Complex Number 2");
                    c.getdata();
                   sum.add(c1,c);
 default: System.out.println("Invalid Choice.");
        }
            System.out.print("Do you want to try again(y/n)? ");
            ans = sc.next().charAt(0);
        }while(ans == 'Y' || ans == 'y');
    }}