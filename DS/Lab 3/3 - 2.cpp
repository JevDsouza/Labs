#include <iostream>
#include <string.h>
using namespace std;

class stack
{
    char num[20];
    int top;
    public:
    stack()
    {
        top = -1;
    }
    void push(char x)
    {
        num[++top] = x;
    }
    void pop()
    {
        while(top >= 0)
        cout << num[top--];
    }
};



int main()
{
    stack s;

    cout << "Enter decimal number." << endl;
    int n;
    cin >> n;

    cout << "Which base do you want to convert to?" << endl;
    int base;
    cin >> base;

    char numbers[] = "0123456789ABCDEF";

    while(n > 0)
    {
        s.push(numbers[n % base]);
        n /= base;
    }

    s.pop();
    return 0;
}
