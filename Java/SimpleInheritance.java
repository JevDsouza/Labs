class A 
	{	int i;
int j;
System.out.println("I Love you");
		void showij() 
	   	{	System.out.println("i and j: " + i + " " + j);
	   	}
	}
	class B extends A 
	{	int k;
		void showk() 
		{            System.out.println("k: " + k);
		}
		
     }
class SimpleInheritance
 {	   public static void main(String args[]) 
	  {	  A bit= new A();
	bit.i = 7;
bit.j=8;
bit.showij();                
            B subOb = new B();
		subOb.i = 7;
		subOb.j = 8;
		subOb.k = 9;
		System.out.println("Contents of subOb: ");
		subOb.showij();
		subOb.showk();
	}  
}
