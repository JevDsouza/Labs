import java.util.*;
import java.io.*;

class Four
{
	public static void main(String[] args) 
	{
		Scanner s = new Scanner(System.in);
		System.out.println("Enter data to put to file. Enter 'done' to stop.");
		StringBuffer x = new StringBuffer();

		while(true)
		{
			String line = s.nextLine();
			if(line.equals("done")) break;
			x.append(line);
			x.append("\n");
		}	

		for(int i = 0; i < x.length(); i++)
		{
			char c = x.charAt(i);
			if(Character.isUpperCase(c))
				x.setCharAt(i, (char)(((c - 'A' + 13) % 26) + 'A'));
			else if (Character.isLowerCase(c))
				x.setCharAt(i, (char)(((c - 'a' + 13) % 26) + 'a'));
			else continue;		
		}

		try
		{
			FileOutputStream f = new FileOutputStream("four.txt");
			f.write(x.toString().getBytes());
		}

		catch(Exception e)
		{
			System.out.println("Writing error. " + e);
		}

		x.setLength(0); 

		try
		{
			FileInputStream f = new FileInputStream("four.txt");
			int i = 0;
			while((i = f.read()) != -1)
				x.append((char)i);
		}

		catch(Exception e)
		{
			System.out.println("Reading error. " + e);
		}

		for(int i = 0; i < x.length(); i++)
		{
			char c = x.charAt(i);
			if(Character.isUpperCase(c))
				x.setCharAt(i, (char)(((c - 'A' + 13) % 26) + 'A'));
			else if (Character.isLowerCase(c))
				x.setCharAt(i, (char)(((c - 'a' + 13) % 26) + 'a'));
			else continue;		
		}

		System.out.println("Decrypted String : " + x);
	}
}