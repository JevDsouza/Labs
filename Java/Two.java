import java.io.*;
import java.util.*;

class Two
{
	public static void main(String[] args) 
	{
		Scanner s = new Scanner(System.in);
		try
		{
			RandomAccessFile f = new RandomAccessFile("random.txt", "rw");
			System.out.println("Enter data to insert.");
			String x = s.nextLine();

			System.out.println("Enter where to insert.");
			int n = s.nextInt();

			f.seek(n);
			f.write(x.getBytes());

			f.seek(0);
			int i = 0;
			while((i = f.read()) != -1)
				System.out.print((char)i);

			System.out.println("");
			f.close();
		}

		catch(Exception e)
		{
			System.out.println(e);
		}		
	}
}