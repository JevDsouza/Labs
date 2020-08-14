
import java.util.Scanner;
public class Numberp {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        number n1=new number(10);
       System.out.println("number is zero:"+n1.isZero());
       System.out.println("number is positive:"+n1.isPositive());
       System.out.println("number is negative:"+n1.isNegative());
       System.out.println("number is odd:"+n1.isOdd());
       System.out.println("number is even:"+n1.isEven());
       System.out.println("number is prime:"+n1.isPrime());
       System.out.println("number is armstrong:"+n1.isArmstrong());
       
    }
    
}
class number{
    double num;
    number(double n)
    {num=n;}
   boolean isZero()
   {if(num==0)
       return true;
   else return false;}
   boolean isPositive(){
    if(num>0)
        return true;
    else return false;
   }
   boolean isNegative()
   {if(num<0)
       return true;
   else return false;}
   boolean isOdd()
   {if(num%2!=0)
       return true;
   else return false;
       }
   boolean isEven()
   { if (num%2==0)
       return true;                 
   else return false;}
   boolean isPrime()
   {int flag=0;
       for(int i=1;i<num;i++)
    { if(num%i!=0)
        flag=1;}
       if(flag==1)
           return true;
       else return false;
   }
   boolean isArmstrong()
   {double temp=num;
    double sum=0;
   while(num>0)
   { double rem=num%10;
     sum=sum+rem*rem*rem;
     num=num/10;
    }
   if(num==temp)
       return true;
   else return false;
    }
   
   
}
