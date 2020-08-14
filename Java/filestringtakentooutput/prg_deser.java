import java.io.*;

class prg_deser
{
	public static void main(String args[]) throws IOException, ClassNotFoundException
	{


		FileInputStream fis = new FileInputStream("d://IOExamples//MIT//ict//stud10.txt");
		ObjectInputStream ois = new ObjectInputStream(fis);

        student s;
        for(int i=0;i<3;i++)
        {
				s =(student) ois.readObject();
				if(s.getMark() > 10)
				s.disp();
	    }

		ois.close();
	}
}