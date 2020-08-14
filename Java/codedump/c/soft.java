import java.util.Scanner;
interface sales
{void get();
void show();}
class h implements sales
{Scanner sc=new Scanner(System.in);
  String c;
  String h;
  double t;
  public void get()
  {
    System.out.println("The category?:");
    c=sc.nextLine();
    System.out.println("The man?:");
    h=sc.nextLine();
    System.out.println("The total sale?:");
    t=sc.nextDouble();

  }
  public void show()
  {
    System.out.println("The category :" +c);

    System.out.println("The man?:"+h);

    System.out.println("The total sale?:"+t);


  }
}
class b implements sales
{Scanner sc=new Scanner(System.in);
  String m;
  String os;
  double to;
  public void get()
  {
    System.out.println("The soft type?:");
    m=sc.nextLine();
    System.out.println("The man?:");
    os=sc.nextLine();
    System.out.println("The total sale?:");
    to=sc.nextDouble();

  }
  public void show()
  {
    System.out.println("The category :" +m);

    System.out.println("The man?:"+os);

    System.out.println("The total sale?:"+to);


  }
}

class soft
{
  public static void main(String[] args) {
    System.out.println("In main");
    b lm=new b();
    lm.get();
    lm.show();
    h mn=new h();
    mn.get();
    mn.show();
  }
}
