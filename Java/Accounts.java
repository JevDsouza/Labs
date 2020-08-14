// Program to implemement banking system
import java.util.Scanner;
class Account {
    String name;
    int accno;
    String type;
    Account(String name, int accno, String type){
        this.name = name;
        this.accno = accno;
        this.type = type;
    }
}
class Current extends Account {
    double balance;
    Current(String name, int accno, String type){
        super(name, accno, type);
        balance = 0;
    }
    void deposit(){
           Scanner sc = new Scanner(System.in);
           System.out.print("Enter Amount to be deposited:- ");
           int amt = sc.nextInt();
           if(amt>0)
               balance+=amt;
           System.out.println("Balance Updated.");
           disp_bal();
    }
    void disp_bal(){
        System.out.println("Balance of Acc. Number "+accno+" is:- "+balance);
    }
    void with_bal(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Amount to be withdrawn:- ");
        int out = sc.nextInt();
        if(out<=balance)
            balance -= out;
        System.out.println("Amount withdrawn.");
        disp_bal();
    }
    void penalty(){
        balance *= 0.9;
    }
}
class Savings extends Account{
    int balance;
    Savings(String name, int accno, String type){
        super(name, accno, type);
        balance = 0;
    }
    void deposit(){
           Scanner sc = new Scanner(System.in);
           System.out.print("Enter Amount to be deposited:- ");
           int amt = sc.nextInt();
           if(amt>0)
               balance+=amt;
           System.out.println("Balance Updated.");
           disp_bal();
    }
    void disp_bal(){
        System.out.println("Balance of Acc. Number "+accno+" is:- "+balance);
    }
    void with_bal(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Amount to be withdrawn:- ");
        int out = sc.nextInt();
        if(out<=balance)
            balance -= out;
        System.out.println("Amount Withdrawn");
        disp_bal();
    }
    void comp_interest(){
        double interest = 0.04*balance;
        double amt = balance + interest;
        System.out.println("Interest to be added over the next month:- " + interest);
        System.out.println("Balance at the end of next month:- " + amt);
    }
}
class Accounts{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char answer;
        do{
        System.out.println("Select Type of account:- ");
        System.out.println("1. Savings");
        System.out.println("2. Current");
        System.out.print("Enter Choice:- ");
        int ch = sc.nextInt();
        System.out.print("Enter Name:- ");
        String name = sc.next();
        System.out.print("Enter Account Number:- ");
        int acc = sc.nextInt();
        int c;
        char ans;
        char a;
        switch(ch){
            case 1: Savings s = new Savings(name, acc, "Savings");
                    do{
                    System.out.println("1. Deposit");
                    System.out.println("2. Withdraw");
                    System.out.println("3. Compute Interest for Upcoming month");
                    System.out.print("Enter Choice:- ");
                    c = sc.nextInt();
                    do{
                        switch(c){
                            case 1: s.deposit();
                                break;
                            case 2: s.with_bal();
                                break;
                            case 3: s.comp_interest();
                                break;
                            default: System.out.println("Invalid choice.");    
                        }
                        System.out.print("Do you want to try again (y/n)? ");
                        ans = sc.next().charAt(0);
                    }while(ans == 'Y' || ans == 'y');
                    System.out.print("Go Back to Savings Account Menu (y/n) ?:- ");
                    a = sc.next().charAt(0);
                    }while(a == 'Y' || a== 'y');
                    break;
            case 2: Current curr = new Current(name, acc, "Current");
                    do{
                    System.out.println("1. Deposit");
                    System.out.println("2. Withdraw");
                    System.out.print("Enter Choice:- ");
                    c = sc.nextInt();
                    do{
                        switch(c){
                            case 1: curr.deposit();
                                break;
                            case 2: curr.with_bal();
                                break;
                            default: System.out.println("Invalid Choice.");
                        }
                        System.out.print("Do you want to try again (y/n)? ");
                        ans = sc.next().charAt(0);
                    }while(ans == 'Y' || ans == 'y');
                    System.out.print("Go Back to Savings Account Menu (y/n) ?:- ");
                    a = sc.next().charAt(0);
                    }while(a == 'Y' || a== 'y');
                    break;
            default: System.out.println("Invalid Choice.");
        }
        System.out.print("Go Back to Main Menu (y/n) ?:- ");
        answer = sc.next().charAt(0);
        }while(answer == 'Y' || answer == 'y');
    }
}