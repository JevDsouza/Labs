/*
Check for magic square
Arvind S
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter rows of matrix." << endl;
    int n;
    cin >> n;

    int a[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];

    int sum_d1 = 0, sum_d2 = 0;

    //check diagonals
    for(int i = 0; i < n; i++)
    {
        sum_d1 += a[i][i];
        sum_d2 += a[i][n - i - 1];
    }

    if(sum_d1 != sum_d2)
    {
        cout << "No." << endl;
        return 0;
    }

    int sum = sum_d1;

    //check rows and columns
    for(int i = 0; i < n; i++)
    {
        int sum_r = 0;
        int sum_c = 0;
        for(int j = 0; j < n; j++)
        {
            sum_r += a[i][j];
            sum_c += a[j][i];
        }
        if(sum_r - sum || sum_c - sum)
        {
            cout << "No." << endl;
            return 0;
        }
    }

    cout << "Yes. Sum of " << sum << endl;
    return 0;
}
