#include <iostream>
#include <string.h>

using namespace std;

class stack
{
    int top;
    char a[100];

    public:

    stack()
    {
        top = -1;
    }

    void push(char x)
    {
        a[++top] = x;
    }

    char pop()
    {
        if(top >= 0)
            return a[top--];
        return '\t';
    }
};

int main()
{
    cout << "Enter an expression." << endl;
    char input[100];
    cin.getline(input, 100);

    stack x;

    for(int i = 0; i < strlen(input); i++)
    {
        if(input[i] == '(' || input[i] == '[' || input[i] == '{')
            x.push(input[i]);

        if(input[i] == ')' || input[i] == ']' || input[i] == '}')
        {
            char last = x.pop();
            if((last == '(' && input[i] == ')') || (last == '{' && input[i] == '}') || (last == '[' && input[i] == ']'))
                continue;
            cout << "Not Balanced." << endl;
            return -1;
        }
    }

    cout << "Balanced." << endl;
    return 0;
}
