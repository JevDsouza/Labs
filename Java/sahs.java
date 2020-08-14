import java.util.Scanner;
class base
{ Scanner sc=new Scanner(System.in);
  int reg;
  String n;
  int a;
  base(int reg, String n, int a)
  {
    this.reg= reg;
    this.n=n;
    this.a=a;
  }
}

class UG extends base
{
  int s;
  double f;
  UG (int reg, String n, int a )
  {super(reg, n, a);
  s=0;
  f=0;
  }
void getdata()
{
  System.out.println("sem");
  s=sc.nextInt();
  System.out.println("fee");
  f=sc.nextInt();
}
void showdata()
{
  System.out.println("name: "+n);

  System.out.println("Regno: "+reg);

  System.out.println("Age: "+a);
  System.out.println("sem: "+s);

  System.out.println("fee: " +f);

}

}


class PG extends base
{
  int l;
  double d;
  PG (int reg, String n, int a )
  {super(reg, n, a);
  l=0;
  d=0;
  }
void getdata()
{System.out.println("In pg");
  System.out.println("sem");
  l=sc.nextInt();
  System.out.println("fee");
  d=sc.nextInt();
}
void showdata()
{
  System.out.println("name: "+n);

  System.out.println("Regno: "+reg);

  System.out.println("Age: "+a);
  System.out.println("sem: "+l);

  System.out.println("fee: " +d);

}

}

class sahs
{
  public static void main(String[] args) {
    Scanner s=new Scanner(System.in);
int reg,a;
String n;
    System.out.println("In pg");
      System.out.println("name");
      n=s.nextLine();
      System.out.println("Regno");
      reg=s.nextInt();
      System.out.println("Age");
      a= s.nextInt();
    UG hi= new UG(reg,n, a);
hi.getdata();
    hi.showdata();

    PG yo= new PG( reg, n, a);
    yo.getdata();
    yo.showdata();
  }
}
