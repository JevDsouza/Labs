import java.util.Scanner;
class Account
{Scanner sc=new Scanner(System.in);
String n;
double ac;
String t;
Account(String n, double ac, String t)
{
  this.n=n;
  this.ac=ac;
  this.t=t;
}
}
class Savings extends Account
{ double bal;
Savings(String n, double ac, String t )
{  super(n,ac,t);
  bal=0;}
  void d()
  {
    System.out.println("Enter amount to be deposited");
    double amt;
    amt=sc.nextDouble();
    if(bal==0)
    bal=amt;
    else
    bal=bal+amt;

  }
  void di()
  {
      System.out.println("Acc no of " +ac + "Your balance: "+bal);
  }

  void in()
  {double inter;

    inter= bal*0.04;
      System.out.println("Your interest" +inter);
      bal=inter+bal;
        System.out.println("Your balance updated after interest" +bal);
  }

  void wid()
  { double why;
    System.out.println("Wanna withdraw? Enter the amount: ");
    why= sc.nextDouble();
    if(why>bal)
    {System.out.println("Cannot withdraw as more than the balance");}
    else
    {bal= bal-why;
      System.out.println("Your balance after withdrawal: "+ bal);
    }
  }
}
  class Current extends Account
  {double b;
    Current(String n, double ac, String t )
    {
      super(n,ac, t);
      b=0;
    }
    void d()
    {
      System.out.println("Enter amount to be deposited");
      double amt;
      amt=sc.nextDouble();
      if(b==0)
      b=amt;
      else
      b=b+amt;
    }
    void di()
    {
        System.out.println("Acc no of " +ac + "Your balance: "+b);
    }
    void wid()
    { double why;
      System.out.println("Wanna withdraw? Enter the amount: ");
      why= sc.nextDouble();
      if(why>b)
      {System.out.println("Cannot withdraw as more than the balance");}
      else
      {b= b-why;
        System.out.println("Your balance after withdrawal: "+ b);
      }
}
      void mi()
      {int t=25;
        System.out.println("To check minimum bal, at least 50 should be there ");
        if(b<50)
        {System.out.println("Penality");
        b=b-t;
        di();}
        else
        {System.out.println("No penality sweety");
        di();
      }

  }}

  class acs
  {
    public static void main(String[] args) {
      Scanner p=new Scanner(System.in);
      System.out.println("Which account type do yu want, 1. Savings or 2.Current?");
      int op;
      op=p.nextInt();
      System.out.print("Enter Name:- ");
       String n = p.next();
       System.out.print("Enter Account Number:- ");
       int ac = p.nextInt();
      switch(op)
      {
        case 1:
        Savings b= new Savings(n, ac, "Savings");
        b.d();
        b.di();
        b.in();
        b.wid();
        break;
        case 2:
        Current lol= new Current(n, ac, "Current");
        lol.d();
        lol.di();
        lol.wid();
        lol.mi();
        break;
        default: System.out.println("Error");
        break;
      };


    }
  }
