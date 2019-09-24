#include <iostream>
using namespace std;

int length(char a[])
{
    int i;
    for(i = 0; a[i] != '\0'; i++);
    return i;
}

int compare(char a[], char b[])
{
    int n_a = length(a), n_b = length(b);
    for(int i = 0; i < (n_a > n_b ? n_b : n_a); i++)
    {
        if(a[i] > b[i]) return (int)(a[i] - b[i]);
        else if (a[i] < b[i]) return -1 * (int)(b[i] - a[i]);
        else continue;
    }
    return 0;
}

void delete_sub(char a[], char b[])
{
    int n_a = length(a), n_b = length(b);
    for(int i = 0; i < n_a; i++)
    {
        int found = 1;
        if(a[i] == b[0])
        {
            for(int j = 0; j < n_b; j++)
            if(a[i + j] != b[j])
            {
                found = 0;
                break;
            }
            if(found)
            {
                for(int j = 0; j < n_b; j++)
                a[i + j] = a[n_b + i + j];
                a[n_a - n_b] = '\0';
            }
        }
    }
}

void insert_sub(char a[], char b[], int x)
{
    int n_a = length(a), n_b = length(b);
    for(int i = n_a - 1; i >= x; i--)
        a[i + n_b] = a[i];
    for(int i = 0; i < n_b; i++)
        a[i + x] = b[i];
    a[n_a + n_b] = '\0';
}

int main()
{
    cout << "Enter a string" << endl;
    char a[100];
    cin.getline(a,100);

    int n_a = length(a);
    cout << "Length is " << n_a << endl;

    cout << "Enter a second string" << endl;
    char b[100];
    cin.getline(b,100);

    int comp = compare(a,b);
    if(!comp) cout << "The strings are equal" << endl;
    else if(comp > 0) cout << a << " is greater" << endl;
    else cout << b << " is greater" << endl;

    int n_b = length(b);
    for(int i = 0; i < n_b; i++)
        a[n_a + i] = b[i];
    a[n_a + n_b] = '\0';
    cout << "Concatenated string: " << a << endl;

    cout << "Enter a substring to delete." << endl;
    char del[100];
    cin.getline(del,100);
    delete_sub(a,del);
    cout << a << endl;

    cout << "Enter a substring to insert." << endl;
    char ins[100];
    cin.getline(ins,100);

    cout << "Which position?" << endl;
    int x;
    cin >> x;
    insert_sub(a,ins,x);
    cout << a << endl;

    return 0;
}
