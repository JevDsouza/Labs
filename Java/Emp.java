// Program to find total salary of employee
// @author Manik Chhabra
import java.util.Scanner;
class Employee{
    String name, city;
    double bsal, dall, hr, total;
    void getdata(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Input Employee Details");
        System.out.print("Enter Employee Name:- ");
        name = sc.nextLine();
        System.out.print("Enter Employee City:- ");
        city = sc.nextLine();
        System.out.print("Enter Basic Salary:- ");
        bsal = sc.nextDouble();
        System.out.print("Enter Dearness Allowance:- ");
        dall = sc.nextDouble();
        System.out.print("Enter House Rent:- ");
        hr = sc.nextDouble();
    }
    void showdata(){
        System.out.println("Entered Employee Details");
        System.out.println("Employee Name:- " + name);
        System.out.println("Employee City:- " + city);
        System.out.println("Basic Salary:- " + bsal);
        System.out.println("Dearness Allowance:- " + dall);
        System.out.println("House Rent:- " + hr);
        System.out.println("Total:- " + total);
    }
    void calctot(){
        total = bsal + (bsal*dall/100) + (bsal*hr/100);
    }
}
public class Emp {
    public static void main(String[] args) {
        Employee e = new Employee();
        e.getdata();
        e.calctot();
        e.showdata();
    }
}
