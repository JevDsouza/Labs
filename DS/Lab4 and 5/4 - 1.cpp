#include <iostream>
using namespace std;

class queue
{
    int a[50];
    int front;
    int rear;
    int count;
    int size;

public:

    queue(int n);
    void enqueue(int x);
    void dequeue();
    bool isfull();
    bool isempty();
    void traverse();
};

int main()
{
    cout << "Enter size of array.\n";
    int n;
    cin >> n;

    queue q(n);

    cout << "MENU:\n1. Enqueue\n2. Dequeue\n3. Exit.\n4. Traverse\n";
    while(true)
    {
        int choice;
        cin >> choice;
        switch(choice)
        {
        case 1:
            {
                cout << "Enter number.\n";
                int x;
                cin >> x;
                q.enqueue(x);
                break;
            }
        case 2:
            {
                q.dequeue();
                break;
            }
        case 3:
            {
                cout << "Exiting.\n";
                return 0;
            }
        case 4:
            {
                q.traverse();
            }
        }
        cout << "\nEnter next choice.\n";
    }
    return 0;
}

queue::queue(int n)
{
    front = count = 0;
    rear = -1;
    size = n;
}

void queue::enqueue(int x)
{
    if(!isfull())
    {
        rear = (rear + 1) % size;
        a[rear] = x;
        count++;
    }
    else cout << "Overflow.\n";
}

void queue::dequeue()
{
    if(!isempty())
    {
        cout << a[front] << endl;
        a[front] = -1;
        front = (front + 1)% size;
        count--;
    }
    else cout << "Underflow.\n";
}

bool queue::isempty()
{
    return count == 0;
}

bool queue::isfull()
{
    return count == size;
}

void queue::traverse()
{
    for(int i = 0; i < size; i++)
        cout << a[i] << " " ;
    cout << endl;
}
