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
    char pop()
    {
        if(top >= 0)
        return num[top--];
        return '\t';
    }
};

int main()
{
    stack s;
    char num[10];
    cin >> num;
    for(int i = 0; i < strlen(num); i++)
        s.push(num[i]);
    bool pal = true;
    for(int i = 0; i <= strlen(num)/2; i++)
    if(num[i] != s.pop())
    {
        pal = false;
        break;
    }
    cout << (pal? "Yes" : "No");
    return 0;
}
