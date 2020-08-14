class Counter
	{	 int c1=0;
		 static int c2;
		 Counter()
	 	{	 c1++;
			 c2++;     }
	 	void disp()
	 	{	  System.out.print("First Counter : "+c1);
			  System.out.println("   Second Counter : "+c2);    }
		}
	class prg3
	{	public static void main(String args[])
  		{	 Counter  o1 = new Counter();
o1.disp();
    	 	    	Counter  o2 = new Counter();
o2.disp();
    	    	    	Counter  o3 = new Counter();
    	                       	o1.disp();
                                           o2.disp();
                                           o3.disp();
       	 }}	
