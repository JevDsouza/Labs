#include <iostream>
using namespace std;

struct triple
{
    int row, col, data;
};

int main()
{
    cout << "Enter number of rows, columns and non zero elements.\n";
    int r,c,x;
    cin >> r >> c >> x;

    triple a[x + 1];
    a[0].col = r;
    a[0].row = c;
    a[0].data = x;

    for(int i = 1; i <= x; i++)
        cin >> a[i].col >> a[i].row >> a[i].data;

    for(int i = 1; i < x; i++)
    {
        for(int j = i + 1; j <= x; j++)
        {
            if(a[i].row > a[j].row)
            {
                triple temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for(int i = 0; i <= x; i++)
        cout << a[i].row << " " << a[i].col << " " << a[i].data << endl;
    return 0;
}
