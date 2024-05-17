#include <iostream>
using namespace std;
int main()
{
    int size, x; int count = 0;
    cout << "enter size";
    cin >> size;
    cout << "enter value of x";
    cin >> x;
    cout << "enter element of array";
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > x)
            count++;
    }
    cout << count;
}