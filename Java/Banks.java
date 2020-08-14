// Program to get rate of interests for different banks
import java.util.Scanner;
class Bank{
	float roi;
	Bank(float roi){
		this.roi = roi;
	}
}
class SBI extends Bank{
	float rsbi;
	SBI(){
		super(8);
		rsbi = 8;
	}
	float getRateofInterest(){
		return roi;
	}
}
class ICICI extends Bank{
	float ricici;
	ICICI(){
		super(7);
		ricici = 7;
	}
	float getRateofInterest(){
		return roi;
	}
}
class AXIS extends Bank{
	float raxis;
	AXIS(){
		super(9);
		raxis = 9;
	}
	float getRateofInterest(){
		return roi;
	}
}
class Banks{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		char ans;
		do{
			System.out.println("1. SBI");
			System.out.println("2. ICICI");
			System.out.println("3. AXIS");
			System.out.print("Enter Choice:- ");
			int ch = sc.nextInt();
			switch(ch){
				case 1:	SBI b1 = new SBI();
						System.out.println("Rate of Interest:- " + b1.getRateofInterest());
						break;
				case 2: ICICI b2 = new ICICI();
						System.out.println("Rate of Interest:- " + b2.getRateofInterest());
						break;
				case 3: AXIS b3 = new AXIS();
						System.out.println("Rate of Interest:- " + b3.getRateofInterest());
						break;
				default: System.out.println("Invalid Choice.");
			}
		System.out.print("Do you want to try again (y/n) ?	");
		ans = sc.next().charAt(0);
		}while(ans == 'Y' || ans == 'y');
	}
}