import java.util.Scanner;

class MenuTwo
{
  String a, b;
  int al, bl;
  MenuTwo(String x, String y)
  {
    a = x;
    b = y;
    al = a.length();
    bl = b.length();
    System.out.println("1. Compare.");
    System.out.println("2. Toggle Cases.");
    System.out.println("3. Check substrings.");
    System.out.println("4. Exit.");
  }

  void compare()
  {
    int x = a.compareTo(b);
    System.out.println(x == 0 ? "Same." : "Different.");
  }

  void toggle()
  {
    StringBuilder one = new StringBuilder();
    for(char x : a.toCharArray())
    {
      if(Character.isUpperCase(x))
        one.append(Character.toLowerCase(x));
      else if(Character.isLowerCase(x))
        one.append(Character.toUpperCase(x));
      else continue;
    }

    StringBuilder two = new StringBuilder();
    for(char x : b.toCharArray())
    {
      if(Character.isUpperCase(x))
        two.append(Character.toLowerCase(x));
      else if(Character.isLowerCase(x))
        two.append(Character.toUpperCase(x));
      else continue;
    }

    System.out.println(one + " " + two);
  }

  void substring()
  {
    if(a.toLowerCase().contains(b.toLowerCase()))
      a = "Hello";

    else if(b.toLowerCase().contains(a.toLowerCase()))
      b = "Hello";

    else System.out.println("Not Substrings.");

    System.out.println(a + " " + b);
  }

}

class MenuTwoDemo
{
  public static void main(String[] args)
  {
    Scanner s = new Scanner(System.in);
    MenuTwo p = new MenuTwo(s.nextLine(), s.nextLine());
    out:
    while(true)
    {
      int c = s.nextInt();
      switch(c)
      {
        case 1:
          p.compare();
          break;
        case 2:
          p.toggle();
          break;
        case 3:
          p.substring();
          break;
        default:
          break out;
      }
    }
  }
}