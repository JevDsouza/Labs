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
    a[0].row = r;
    a[0].col = c;
    a[0].data = x;

    for(int i = 1; i <= x; i++)
        cin >> a[i].row >> a[i].col >> a[i].data;

    //now we maintain a list of each column
    int count[c] = {0};
    for(int i = 1; i <= x; i++)
        count[a[i].col]++;

    //new array for placeholders
    int place[c] = {0};
    for(int i = 1; i <= x; i++)
        place[i] = place[i - 1] + count[i - 1];

    triple b[x + 1];
    for(int i = 1; i <= x; i++)
    {
        int j = place[a[i].col] + 1;
        b[j].row = a[i].col;
        b[j].col = a[i].row;
        b[j].data = a[i].data;
        place[a[i].col]++;
    }

    b[0].row = a[0].col;
    b[0].col = a[0].row;
    b[0].data = a[0].data;

    //display
    for(int i = 0; i <= x; i++)
        cout << b[i].row << " " << b[i].col << " " << b[i].data << endl;

    return 0;
}
