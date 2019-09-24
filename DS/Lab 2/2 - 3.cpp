#include <iostream>
using namespace std;

class time
{
    int hours, mins, secs;
    public:
    time operator+(time &b);
    time operator-(time &b);
    void read(){cin >> hours >> mins >> secs;}
    void display(){cout << hours << " " << mins << " " << secs << endl;}
    int total_time(){return hours * 3600 + mins * 60 + secs;}
    time(){hours = mins = secs = 0;}
    time(int);
};

int main()
{
    time a, b;
    a.read();
    b.read();
    time c = a + b;
    c.display();
    time d = a - b;
    d.display();
    return 0;
}

time::time(int total)
{
    hours = total / 3600;
    total %= 3600;
    mins = total / 60;
    total %= 60;
    secs = total;
}

time time::operator+(time &b)
{
    int total = total_time() + b.total_time();
    return time(total);
}

time time::operator-(time &b)
{
    int total = (total_time() - b.total_time());
    if(total < 0) total *= -1;
    return time(total);
}
