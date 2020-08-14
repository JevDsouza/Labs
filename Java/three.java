import java.util.Scanner;
class Time{
int h,m,s;
    Time()
	{
		h=0;
		m=0;
		s=0;
	}
Time(int h,int m,int s)
    {
        this.h=h;
        this.m=m;
        this.s=s;
    }
	
	void Correct()
    {
        if(s>=60)
        {
            m+=s/60;
            s%=60;
        }
        if(m>=60)
        {
            h+=m/60;
            m%=60;
        }
        if(h>=24)
        {
            h%=24;
        }
		return ;
    }
	Time Add(Time t1,Time t2,Time t3)
	{
		t3.s=t1.s+t2.s;
		t3.h=t1.h+t2.h;
		t3.m=t1.m+t2.m;
		return t3;
	}
	void Display()
	{
		System.out.println(h+":"+m+":"+s);
	}
}
public class three {
public static void main(String[] args) {

Scanner sc=new Scanner(System.in);
int hi=sc.nextInt();
int mi=sc.nextInt();
int si=sc.nextInt();

Time i= new Time();
i.Display();
System.out.println("Time?");

int h1=sc.nextInt();
int m1=sc.nextInt();
int s1=sc.nextInt();

Time t1=new Time(h1,m1,s1);
t1.Correct();
t1.Display();

System.out.println("Time?");
int h2=sc.nextInt();
int m2=sc.nextInt();
int s2=sc.nextInt();
Time t2=new Time(h2,m2,s2);
t2.Correct();
t2.Display();
Time t3=new Time();
t3.Add(t1,t2,t3);
t3.Correct();
t3.Display();
}
}