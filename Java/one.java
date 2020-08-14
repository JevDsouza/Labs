import java.io.*;
import java.util.*;

class Menu
{
	Menu()
	{
		System.out.println("1. Write.\n2. Read.\n3. Copy data.\n4. Exit.");
	}

	int returnChoice()
	{
		Scanner s = new Scanner(System.in);
		return s.nextInt();
	}

	void writeIntoFile()
	{
		System.out.println("Enter data to write.");
		Scanner s = new Scanner(System.in);
		try
		{
			FileOutputStream f = new FileOutputStream("original.txt");
			f.write(s.nextLine().getBytes());
			f.close();
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
	}

	void copyIntoFile()
	{
		try
		{
			FileInputStream reader = new FileInputStream("original.txt");
			FileOutputStream writer = new FileOutputStream("duplicate.txt");
			int i = 0;
			while((i = reader.read()) != -1)
				writer.write(i);
			reader.close();
			writer.close();

			System.out.println("Copied.");

			FileInputStream copy = new FileInputStream("duplicate.txt");
			int j = 0;
			while((j = copy.read()) != -1)
				System.out.print((char)j);
			System.out.println("");
			copy.close();
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
	}

	void readFromFile()
	{
		System.out.println("This is the file till EOF.");
		try
		{
			FileInputStream f = new FileInputStream("original.txt");

			int i = 0;
			while((i = f.read()) != -1)
				System.out.print((char) i);
			System.out.println("");

			f.close();
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
	}
}

class One
{
	public static void main(String[] args) 
	{
		Menu x = new Menu();
		while(true)
		{
			switch(x.returnChoice())
			{
				case 1:
					x.writeIntoFile();
					break;
				case 2:
					x.readFromFile();
					break;
				case 3:
					x.copyIntoFile();
					break;
				case 4:
					System.exit(0);
				default:
					System.out.println("Wrong choice.");
			}
			System.out.println("Enter next choice.");
		}
	}
}