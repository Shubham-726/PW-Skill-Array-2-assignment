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
    bool flag = true;
    for (int i = 0, j = size - 1; i <= j; i++, j--)
    {
        if (arr[i] != arr[j])
        {
            flag = false;
            break;
        }
       
    }
    if (flag == true)
    {
        cout << "given array is palindrome";
    }
    else
        cout << "given array is not palindrome";
}