import java.util.Scanner;
class Employee{
    String e,c;
    double bs,da,hr,tot;
    void getdata()
    {   
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter employee name");
        e=sc.nextLine();
        System.out.println("Enter city");
        c=sc.nextLine();
        System.out.println("Enter basic salary");
        bs=sc.nextDouble();
        System.out.println("Enter dearness allowance");
        da=sc.nextDouble();
        System.out.println("Enter house rent");
        hr=sc.nextDouble();
           
    }
    void calculate()
    {
        tot=bs+bs*da/100+bs*hr/100;
    }
    void display()
    {
        System.out.println("Total salary is: "+tot);
    }
}
public class two {
public static void main(String[] args) {
Employee e1=new Employee();
e1.getdata();
e1.calculate();
e1.display();
}
}