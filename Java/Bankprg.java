
public class Bankprg {

    public static void main(String[] args) {
        // TODO code application logic here
        sbi s=new sbi();
        icici c=new icici();
        axis a=new axis();
        bank b=new bank();
        b=s;
        b.getrateofinterest();
        b=c;
        b.getrateofinterest();
        b=a;
        b.getrateofinterest();
    }
    
}
class bank
{ int rate;
  float balance=50000;
 void getrateofinterest()
 { balance=balance+balance*5/100;
  System.out.println("new balance is "+balance);
 }
}
class sbi extends bank
{void getrateofinterest()
{ balance=balance+balance*8/100;
System.out.println("new balance is "+balance);
}
}
class icici extends bank
{ void getrateofinterest()
{ balance=balance+balance*7/100;
System.out.println("new balance is "+balance);}
}
class axis extends bank
{void getrateofinterest()
{ balance=balance+balance*9/100;
System.out.println("new balance is "+balance);}
}

