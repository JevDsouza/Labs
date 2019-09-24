#include <iostream>
using namespace std;

int main()
{
    cout << "Enter rows of matrix." << endl;
    int n;
    cin >> n;

    int a[n][n], b[n][n], c[n][n];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        c[i][j] = 0;

    cout << "Matrix A: " << endl;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        cin >> a[i][j];

    cout << "Matrix B: " << endl;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        cin >> b[i][j];

    for(int i = 0; i < n; i++)
    {
        int k = 0;
        for(int j = 0; j < n; j++)
        for(int k = 0; k < n; k++)
        c[i][j] += a[i][k] * b[k][j];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cout << c[i][j] << "\t" ;
        cout << endl;
    }

    return 0;

}
