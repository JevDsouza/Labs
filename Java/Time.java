
public class Time {

    
    public static void main(String[] args) {
        // TODO code application logic here
        timep t1=new timep();
        timep t2=new timep(3,19,6);
        timep t3=new timep(2,45,40);
        timep t4=new timep();
        t4.add(t2,t3);
        t4.display();
        
    }
    
}
class timep{
    int hours,min,sec;
    timep(){}
    timep(int h,int m,int s){
        hours=h;
        min=m;
        sec=s;
    }
    void add(timep a,timep b){
        
        this.sec=a.sec+b.sec;
        if(this.sec>59)
        { this.min=this.min+1;
          this.sec=this.sec-60;}
        this.min=a.min+b.min;
        if(this.min>59)
        { this.hours=this.hours+1;
          this.min=this.min-60;}
        this.hours=a.hours+b.hours;
        
    }
    void display()
    { System.out.println("time is "+hours+":"+min+":"+sec);}
}
