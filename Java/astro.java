import java.util.Scanner;
interface area
{

 void arear();

}
class r implements area
{int b,l;
  void getdata()
  {Scanner p=new Scanner(System.in);

    System.out.println("The breadth");
    b=p.nextInt();
    System.out.println("The length");
    l=p.nextInt();

  }
  void showdata()
{  System.out.println("The breadth: "+b);

  System.out.println("The length: "+l);



}
public void arear()
  {  System.out.println("Inside r");
    int a;
  a=l*b;
    System.out.println("area: "+a);

  }
}
class c  implements area
{int r;
  void getdata()
  {Scanner p=new Scanner(System.in);

    System.out.println("The radius");
    r=p.nextInt();
  }
  void showdata()
{

  System.out.println("The radius: "+r);

}
public  void arear()
  {  System.out.println("Inside c");
    double ar;
  ar=3.14*r*r;
    System.out.println("area: "+ar);

  }
}

class astro
{
  public static void main(String[] args) {
    System.out.println("Hey!");
    r q=new r();
    q.getdata();
    q.showdata();
    q.arear();
    c o=new c();
    o.getdata();
    o.showdata();
    o.arear();
  }
}
