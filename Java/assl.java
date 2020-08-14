
public class assl {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int a[][]={{1,2,3},{4,5,6},{7,8,9}};
       mythread t1=new mythread(0,a);
       mythread t2=new mythread(1,a);
       mythread t3=new mythread(2,a);
       t1.start();
       System.out.println("thread 1 working: "+t1.isAlive());
      t2.start();
      System.out.println("thread 2 working: "+t2.isAlive());
       t3.start();
       System.out.println("thread 3 working: "+t3.isAlive());
       try{ t1.join();
        t2.join();
        t3.join();}
        catch(Exception e)
        {}
       int total;
       System.out.println("sum of first row "+t1.row);
       System.out.println("sum of second row "+t2.row);
       System.out.println("sum of third row "+t3.row);
       total=t1.row+t2.row+t3.row;
       System.out.println("total sum is "+total);
    }
}

class mythread extends Thread
{ int row=0;
    int rno,arr[][];
    mythread(int r,int a[][])
    {rno=r;
    arr=a;}
    public void run()
    { for(int i=0;i<3;i++)
        row=row+arr[rno][i];
    }
}
