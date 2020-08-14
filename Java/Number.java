class NumberFormatException extends Exception
{
  NumberFormatException()
  {
    System.out.println("Invalid Number.");
  }
}

class Number
{
  public static void main(String[] args)
  {
    String s = args[0];
    try
    {
      double y = Double.parseDouble(s);
      int x = Integer.parseInt(s);
    }
    catch(Exception e)
    {
      try
      {
        throw new NumberFormatException();
      }
      catch(NumberFormatException p)
      {
        System.out.println(p);
      }
    }
  }
}