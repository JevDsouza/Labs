import java.util.Scanner;

class MenuOne
{
  String a;
  int n;
  MenuOne(String x)
  {
    //lowercase
    a = x;
    n = a.length();
    System.out.println("1. Check for Palindrome.");
    System.out.println("2. Sort Alphabetically.");
    System.out.println("3. Reverse.");
    System.out.println("4. Merge with reverse.");
    System.out.println("5. Exit.");
  }

  Boolean palindrome()
  {
    return a.toLowerCase().equals(new StringBuffer(a).reverse().toString().toLowerCase());
  }

  String alphabets()
  {
    int count[] = new int[26];
    for(int i = 0; i < n; i++)
    count[a.charAt(i) - 'a']++;

    StringBuilder sorted = new StringBuilder();
    for(int i = 0; i < 26 ; i++)
      for(int j = 0; j < count[i]; j++)
        sorted.append((char)(i + 'a'));

    return sorted.toString();
  }

  String reverse()
  {
    return new StringBuffer(a).reverse().toString();
  }

  String merge()
  {
    return new StringBuffer(a).append(reverse()).toString();
  }

}

class MenuOneDemo
{
  public static void main(String[] args)
  {
    Scanner s = new Scanner(System.in);
    String x = s.nextLine();
    MenuOne p = new MenuOne(x);
    out:
    while(true)
    {
      int c = s.nextInt();
      switch(c)
      {
        case 1:
          System.out.println(p.palindrome() ? "Palindrome." : "Not Palindrome.");
          break;
        case 2:
          System.out.println(p.alphabets());
          break;
        case 3:
          System.out.println(p.reverse());
          break;
        case 4:
          System.out.println(p.merge());
          break;
        case 5:
          System.out.println("Exiting.");
          break out;
        default:
          System.out.println("Enter valid choice.");
      }
    }
  }
}cm
                n++;
            }
        }
        System.out.println("Total number of words are "+n);
    }
    void linecount(String a)
    {
        int n=1;
        for(int i =0;i<a.length();i++)
        {
            if(a.charAt(i)=='.'&& a.charAt(i+1)!=' ')
            {
                n++;
            }
        }
        System.out.println("Total number of lines are "+n);
    }
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a String ");
        String a = sc.nextLine();
        String1 b = new String1();
        b.charcount(a);
        b.vowelcount(a);
        b.wordcount(a);
        System.out.println("Enter a Multilined String ");
        int i1=0;
        int i=0;
        String c[]=new String[50];
        System.out.println("Enter multiline string, press v to end the string input");
        do
        {
            c[i1]=sc.nextLine();
            i1++;
        }while(!c[i1-1].equals("v"));
        int count =0;
        System.out.println("Sentence entered is ");
        for(i=0;i<i1-1;i++)
        {
            System.out.println(c[i]);
        }
        System.out.println("Number of lines are "+ (i1-1));
        System.out.println("Enter a long sentence ");
        String d = sc.nextLine();
         b.linecount(d);    
        
        
    }
    
    
}
