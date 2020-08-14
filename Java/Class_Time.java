// Program to show Time data
// @author Manik Chhabra
import java.util.Scanner;
class Time{
    int hr, min, sec;
    Time(){
        hr=0;
        min=0;
        sec=0;
    }
    Time(int h,int m,int s){
        hr = h;
        min = m;
        sec = s;
    }
    void showdata(){
        System.out.println("Entered Time Data");
        System.out.println(hr+":"+min+":"+sec);
    }
}
public class Class_Time {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Time T1 = new Time();
        int hr, sec, min;
        System.out.print("Enter Hour:- ");
        hr = sc.nextInt();
        System.out.print("Enter Minutes:- ");
        min = sc.nextInt();
        while(min<0 || min>=60){
            System.out.println("Invalid.");
            System.out.println("Enter again:- ");
            min = sc.nextInt();
        }
        System.out.println("Enter Seconds:- ");
        sec = sc.nextInt();
        while(sec<0 || sec>=60){
            System.out.println("Invalid.");
            System.out.println("Enter again:- ");
            sec = sc.nextInt();
        }
        Time T2 = new Time(hr,min,sec);
        System.out.println("Time 1");
        T1.showdata();
        System.out.println("Time 2");
        T2.showdata();
    }
}
