
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
}
public class Class_Complex {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Complex c1 = new Complex();
        Complex c2 = new Complex();
        Complex sum = new Complex();
        char ans;
        do{
        System.out.println("1. Non - Complex + Complex");
        System.out.println("2. Complex + Complex");
        System.out.print("Enter Choice:- ");
        int ch = sc.nextInt();
        switch(ch){
            case 1: int num;
                    c1.getdata();
                    System.out.print("Enter Real Number:- ");
                    num = sc.nextInt();
                    sum = add(num,c1);
                    System.out.println(c1.re + " + i" + c1.im + " + " + num + " = " + sum.re + " + i" + sum.im);
                    break;
            case 2: System.out.println("Complex Number 1");
                    c1.getdata();
                    System.out.println("Complex Number 2");
                    c2.getdata();
                    sum = add(c1,c2);
                    System.out.println(c1.re + " + i" + c1.im + " + " + c2.re + " + i" + c2.im + " = " + sum.re + " + i" + sum.im);
                    break;
            default: System.out.println("Invalid Choice.");
        }
            System.out.print("Do you want to try again(y/n)? ");
            ans = sc.next().charAt(0);
        }while(ans == 'Y' || ans == 'y');
    }
    public static Complex add(int num, Complex c){
        Complex sum = new Complex();
        sum.re = num + c.re;
        sum.im = c.im;
        return sum;
    }
    public static Complex add(Complex c1, Complex c2){
        Complex sum = new Complex();
        sum.re = c1.re + c2.re;
        sum.im = c1.im + c2.im;
        return sum;
    }
}
