#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void radixsort(int[],int);

int main()
{
    cout << "Enter 10 numbers.";
    int a[] = {10, 15, 1, 60, 5431, 100, 25, 50, 666, 45};
    radixsort(a, 0);
    for(int i = 0; i < 10; i++) cout << a[i] << " " ;
    return 0;
}

void radixsort(int a[], int place)
{
    vector <vector <int> > counter(10);
    for(int i = 0; i < 10; i++)
        counter[a[i] / (int)pow(10, place) % 10].push_back(a[i]);
    if(counter[0].size() == 10) return;
    int k = 0;
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < counter[i].size(); j++)
            a[k++] = counter[i][j];
    }
    radixsort(a, place + 1);
}
