#include <iostream>
using namespace std;

class stack
{
    int a[50];
    int top[10];
    int bottom[10];

    public:
    stack();
    stack(int, int);
    bool isempty(int);
    bool isfull(int);
    void push(int, int);
    void pop(int);

};

int main()
{
    cout << "Total number of values?\n";
    int x;
    cin >> x;

    cout << "How many stacks?\n";
    int n;
    cin >> n;

    stack s(n, x);

    int stack_no = 0, data = 0;

    cout << "Enter elements in the format \"stack_no\" \"data\"\nEnter -1 to quit and pop.\n";
    while(true)
    {
        cin >> stack_no;
        if(stack_no < 0) break;
        cin >> data;
        s.push(data, stack_no);
    }

    cout << "Popping all values:\n";
    for(int i = 0; i < n; i++)
        s.pop(i);

    return 0;
}

//by default we take 10 parts of the entire stack
stack()
{
    for(int i = 0; i < 10; i++)
        bottom[i] = i * (50 / 10) - 1;
    for(int i = 0; i < 10; i++)
        top[i] = bottom[i];
}

//if specified then we use n as number of parts of an x-sized stack
stack(int n, int x)
{
    for(int i = 0; i < 10; i++)
        bottom[i] = i * (x / n) - 1;
    for(int i = 0; i < 10; i++)
        top[i] = bottom[i];
}

//isempty returns true if x-th stack is empty
bool isempty(int x)
{
    if(top[x] == bottom[x]) return true;
    return false;
}

//isfull returns true if x-th stack is full
bool isfull(int x)
{
    if(top[x] == bottom[x + 1]) return true;
    return false;
}

//we push x value into the i-th stack
void push(int x, int i)
{
    if(!isfull(i))
        a[++top[i]] = x;
    else cout << "Overflow.\n";
}

//we pop out all values of the x-th stack
void pop(int x)
{
    while(!isempty(x))
        cout << a[top[x]--] << " " ;
    cout << endl;
}
