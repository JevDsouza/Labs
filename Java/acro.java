import java.util.Scanner;
interface area
{int b, l, r;

 void arear();

}
class implements area
{
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
  void arear()
  {  System.out.println("Inside r");
    int a;
  a=l*b;
    System.out.println("area: "+a);

  }
}
class c  implements area
{
  void getdata()
  {Scanner p=new Scanner(System.in);

    System.out.println("The radius");
    r=p.nextInt();
  }
  void showdata()
{

  System.out.println("The radius: "+r);

}
  void arear()
  {  System.out.println("Inside c");
    double ar;
  ar=3.14*r*r;
    System.out.println("area: "+ar);

  }
}

class acro
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
