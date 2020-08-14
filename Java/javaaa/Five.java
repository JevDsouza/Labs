import java.util.*;
import java.io.*;

class Student implements Serializable
{
	int id;
	String name;
	int marks[];
	double percent;
	char grade;

	Student(int n)	
	{
		Scanner s = new Scanner(System.in);
		System.out.println("Enter name and ID");
		name = s.nextLine();
		id = s.nextInt();

		System.out.println("Enter marks in " + n + " subjects.");
		marks = new int[n];
		for(int i = 0; i < n; i++)
		{
			marks[i] = s.nextInt();
			percent += marks[i];
		}

		System.out.println("What is total marks for a subject?");
		percent = percent  * 100 / (s.nextDouble() * n);

		if(percent > 90.0) grade = 'A';
		else if(percent > 80.0) grade = 'B';
		else if(percent > 70.0) grade = 'C';
		else grade = 'D';

		System.out.println("");
	}

	void display()
	{
		System.out.println(name + " has scored " + grade);
	}

	Student()
	{
		name = "null";
		marks = new int[1];
		marks[0] = id = -1;
		percent = -1.0;
		grade = '?';
	}
}

class Five
{
	public static void main(String[] args) 
	{
		//args[0] = students args[1] = subjects
		int n = Integer.parseInt(args[0]);
		Student[] s = new Student[n];
		for(int i = 0; i < n; i++)
			s[i] = new Student(Integer.parseInt(args[1]));

		try
		{
			ObjectOutputStream o = new ObjectOutputStream(new FileOutputStream("five.txt"));
			for(int i = 0; i < n; i++)
				o.writeObject(s[i]);
			o.writeObject(new Student());
			o.close();
		}

		catch(Exception e)
		{
			System.out.println("Writing error " + e);
		}	

		try
		{
			ObjectInputStream o = new ObjectInputStream(new FileInputStream("five.txt"));
			ArrayList<Student> obj = new ArrayList<Student>();
			while(true)
			{
				Student x = (Student)o.readObject();
				if(x.id == -1) break;
				else obj.add(x);
			}

			for(int i = 0; i < obj.size(); i++)
			{
				obj.get(i).display();
			}
		}

		catch(Exception e)
		{
			System.out.println("Reading error " + e);
		}
	}
}