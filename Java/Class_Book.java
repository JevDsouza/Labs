// Program to input Book data
// @author Manik Chhabra
import java.util.Scanner;
class Book{
    String title, author;
    int edition;
    Book(){
        title = "\0";
        author = "\0";
        edition = -1;
    }
    void getdata(){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Title:- ");
        title = sc.nextLine();
        System.out.print("Enter Author:- ");
        author = sc.nextLine();
        System.out.print("Enter Edition:- ");
        edition = sc.nextInt();
    }
    void showdata(){
        System.out.println("Title:- " + title);
        System.out.println("Author:- " + author);
        System.out.println("Edition:- " + edition);
    }
}
public class Class_Book {
    public static void main(String[] args) {
        Book b[] = new Book[6];
        int i;
        Scanner sc = new Scanner(System.in);
        for(i=0;i<6;i++)
            b[i] = new Book();
        for(i=0;i<6;i++){
            System.out.println("Enter Data for Book Number " + (i+1) + ":- ");
            b[i].getdata();
        }
        System.out.println("Books by Harry:- ");
        for(i=0;i<6;i++){
            if(b[i].author.contentEquals("Harry"))
                b[i].showdata();
        }
    }
}
