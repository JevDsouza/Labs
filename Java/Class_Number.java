// Program to check paramters of a number
// @author Manik Chhabra
import java.util.Scanner;
import java.lang.Math;
class Number{
    private double num;
    void getdata(){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Number:- ");
        num = sc.nextInt();
    }
    boolean isZero(){
        if(num==0)
            return true;
        else return false;
    }
    boolean isPositive(){
        if(num>0)
            return true;
        else return false;
    }
    boolean isNegative(){
        if(num<0)
            return true;
        else return false;
    }
    boolean isOdd(){
        if(num%2!=0)
            return true;
        else return false;
    }
    boolean isEven(){
        if(num%2==0)
            return true;
        else return false;
    }
    boolean isPrime(){
        int i;
        boolean p = true;
        for(i=2;i<=(num/2);i++){
            if(num%i==0){
                p=false;
                break;
            }
        }
        return p;
    }
    boolean isArmstrong(){
            double numc = num;
            double nc = num;
            int nd = 0;
            double rem, arm=0;
            while(nc>0){
                nd++;
                nc/=10;
            }   
            while(num>0){
                rem = num%10;
                arm += Math.pow(rem,nd);
                num/=10;            
            }
            if(numc==arm)
                return true;
            else return false;
       }   
}
public class Class_Number {
    public static void main(String[] args) {
        Number n = new Number();
        char ans;
        Scanner sc = new Scanner(System.in);
        do{
            n.getdata();
            System.out.println("isZero = " + n.isZero());
            System.out.println("isPositive = " + n.isPositive());
            System.out.println("isNegative = " + n.isNegative());
            System.out.println("isOdd = " + n.isOdd());
            System.out.println("isEven = " + n.isEven());
            System.out.println("isPrime = " + n.isPrime());
            System.out.println("isArmstrong = " + n.isArmstrong());
            System.out.println("Do you want to try again(y/n)? ");
            ans = sc.next().charAt(0);
        }while(ans == 'Y' || ans == 'y');
    }
}
