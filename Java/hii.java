class hii{
{       static void procA() 
	      {	     try  {      System.out.println("inside procA");
		                   throw new RuntimeException("demo");    } 
                    finally 
		    {	System.out.println("procA's finally");         }
	     }
        public static void main(String args[]) 
	    {	try    {       procA();    }

		 catch (Exception e)
	 	{	System.out.println("Exception caught");
               }
 	 }

}