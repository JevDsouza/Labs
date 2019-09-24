#include <iostream>
#include <string.h>
using namespace std;

class student
{
    public:
    char name[20];
    int rno;
    char grade;

    void read(){cin >> name >> rno >> grade;}
    student(char a[], int b, char c);
    student();
    student operator=(student &x);
};

void sort_stud(student s[], int n, int x);
void sort_stud(student s[], int n, char x[]);
void display(student s[], int n);

int main()
{
    cout << "How many students?" << endl;
    int n;
    cin >> n;

    char names[n][20];
    int roll[n];
    char grade[n];
    student lists[n];

    for(int i = 0; i < n; i++)
    lists[i].read();

    cout << "Sort by name(1) or roll number(0)?" << endl;
    int choice;
    cin >> choice;

    switch(choice)
    {
        case 0 : sort_stud(lists,n,0); break;
        case 1 : sort_stud(lists,n,"name"); break;
        default:
            {
                cout << "Invalid choice. Exiting." << endl;
                return -1;
            }
    }

    display(lists,n);
    return 0;
}

void display(student s[], int n)
{
    for(int i = 0; i < n; i++)
    cout << s[i].name << " " << s[i].rno << " " << s[i].grade << endl;
}

void sort_stud(student s[], int n, int x)
{
    for(int i = 0; i < n - 1; i++)
    for(int j = i + 1; j < n; j++)
    if(s[i].rno > s[j].rno)
    {
        student temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

void sort_stud(student s[], int n, char x[])
{
    for(int i = 0; i < n - 1; i++)
    for(int j = i + 1; j < n; j++)
    if(strcmpi(s[i].name, s[j].name) > 0)
    {
        student temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

student::student(char a[], int b, char c)
{
    for(int i = 0; i < strlen(a); i++)
    name[i] = a[i];
    rno = b;
    grade = c;
}

student::student()
{
    name[19] = '\0' ;
    rno = 0;
    grade = 'D';
}

student student::operator=(student &x)
{
    for(int i = 0; i < strlen(x.name); i++)
    name[i] = x.name[i];
    rno = x.rno;
    grade = x.grade;
    return student(name,rno,grade);
}
