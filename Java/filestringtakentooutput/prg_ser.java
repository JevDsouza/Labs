import java.io.*;
class student implements Serializable
{
   String name;
   int mark;
    student(String name, int mark)
    {
		this.name = name;
		this.mark = mark;
	}

	void disp()
	{
		System.out.println(name+"  "+mark);
    }
    int getMark()
    {
		 return mark;
	}
}
class prg_ser
{
	public static void main(String args[]) throws IOException
	{
		student s1 = new student("anil",13);
		student s2 = new student("sunil",8);
		student s3 = new student("rahul",12);


		FileOutputStream fos = new FileOutputStream("d://IOExamples//MIT//ict//stud10.txt");
		ObjectOutputStream oos = new ObjectOutputStream(fos);

		oos.writeObject(s1);
		oos.writeObject(s2);
		oos.writeObject(s3);
		oos.close();
	}
}