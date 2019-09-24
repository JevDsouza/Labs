/*
Three sorts
Arvind S
*/

#include <iostream>
using namespace std;

void bubble(int a[], int n)
{
    int temp;
    for(int i = 0; i < n - 1; i++)
        for(int j = i + 1; j < n; j++)
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}

void selection(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int min = a[i], pos = i;
        for(int j = i + 1; j < n; j++)
            if(a[j] < min)
            {
                min = a[j];
                pos = j;
            }
        int temp = a[pos];
        a[pos] = a[i];
        a[i] = temp;
    }
}

void insertion(int a[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int p = a[i], j = i - 1;
        while(p < a[j] && j >= 0)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = p;
    }
}

int main()
{
    cout << "Enter size of array." << endl;
    int n;
    cin >> n;

    int a[n];
    cout << "Enter elements." << endl;
    for(int i = 0; i < n; i++) cin >> a[i];

    cout << "Enter B for Bubble, I for Insertion and S for selection sort." << endl;
    char choice;
    cin >> choice;

    if(choice == 'B' || choice == 'b') bubble(a,n);
    else if(choice == 'I' || choice == 'i') insertion(a,n);
    else if(choice == 'S' || choice == 's') selection(a,n);
    else
    {
        cout << "Invalid choice. Exiting." << endl;
        return -1;
    }

    cout << "Sorted array" << endl;
    for(int i = 0; i < n; i++) cout << a[i] << " " ;
    return 0;
}
