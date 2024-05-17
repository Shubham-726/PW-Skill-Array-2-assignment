#include <iostream>
#include <stdbool.h>
using namespace std;
int main()
{
    int size;

    cout << "enter size";
    cin >> size;
    cout << "enter element of array";
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    bool flag = false;
    for (int i = 0, j = size - 1; i < j; i++, j--)
    {
        if (arr[i] > arr[j])
        {
            flag = true;
        }
        else
            flag = false;
    }
    if (flag == true)
    {
        cout << "given array is sorted";
    }
    else
        cout << "given array is not sorted";
}