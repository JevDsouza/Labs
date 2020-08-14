import java.io.*;
import java.util.*;

class Three
{
	public static void main(String[] args) 
	{
		Scanner s = new Scanner(System.in);
		try
		{
			FileOutputStream x = new FileOutputStream("three.txt");
			System.out.println("Enter data to file and type 'done' to terminate.");
			while(true)
			{
				String line = s.nextLine();
				if(line.equals("done")) break;
				x.write(line.getBytes());
				x.write("\n".getBytes());
			}
		}
		catch(Exception e)
		{
			System.out.println("Writing error " + e);
		}

		try
		{
			FileInputStream x = new FileInputStream("three.txt");
			System.out.println("Reading file.");

			int i = 0;
			StringBuffer sb = new StringBuffer();
			int lines = 0;

			while((i = x.read()) != -1)
			{
				if((char)i == '\n')
				{
					lines++;
					sb.append(" ");
				}
				else sb.append((char)i);				
			}

			int characters = sb.length();
			int vowels = 0;
			int words = 0;

			String a = sb.toString();

			for(i = 0; i < a.length(); i++)
			{
				if(Character.isLetter(a.charAt(i)) && a.charAt(i + 1) == ' ')
					words++;

				if("aeiouAEIOU".indexOf(a.charAt(i)) >= 0)
					vowels++;
			}

			System.out.println(characters + " " + words +  " " + vowels +  " " + lines);
		}

		catch(Exception e)
		{
			System.out.println("Reading error " + e);
		}
	}
}