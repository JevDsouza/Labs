// Demonstrate the bitwise logical operators.
class BitLogic
{      public static void main(String args[])
       {
      	int a = 3, b = 6;
	int c = a | b;
	int d = a & b;
	int e = a ^ b;
	int f = (~a & b) | (a & ~b);
	
	System.out.println(" a = " + a);
	System.out.println(" b = " + b);
	System.out.println(" a|b = " +c);
	System.out.println(" a&b = " + d);
	System.out.println(" a^b = " + e);
	System.out.println("~a&b|a&~b = " + f);
	         
     }
}
