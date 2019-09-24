#include <iostream>
using namespace std;

int main()
{
    cout << "Enter size of matrix" << endl;
    int r, c;
    cin >> r >> c;

    int a[r][c], b[r][c], max[r][c];

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
        cin >> a[i][j];

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
        {
            cin >> b[i][j];
            max[i][j] = a[i][j] > b[i][j] ? a[i][j] : b[i][j];
        }

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
            cout << max[i][j] << " " ;
        cout << endl;
    }

    return 0;
}
