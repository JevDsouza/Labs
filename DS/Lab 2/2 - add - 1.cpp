#include <iostream>
#include <fstream>

using namespace std;

struct student
{
    char name[20];
    int rno;
    char grade;
    char branch[20];
    void read()
    {
        cin >> name >> rno >> grade >> branch;
    }
    void disp()
    {
        cout << name << " " << rno << " " << grade << " " << branch << endl;
    }
};

int main()
{
    ofstream f1("stud.txt");

    cout << "How many records?" << endl;
    int n;
    cin >> n;
    student s[n];

    for(int i = 0; i < n; i++)
    {
        s[i].read();
        f1 << s[i].name << " " << s[i].rno << " " << s[i].grade << " " << s[i].branch << "\n";
    }

    f1.close();

    ifstream f2("stud.txt");
    student records[n];
    int i = 0;

    while(f2 >> records[i].name >> records[i].rno >> records[i].grade >> records[i].branch)
    {
        records[i].disp();
        i++;
    }

    f1.close();
    return 0;
}
