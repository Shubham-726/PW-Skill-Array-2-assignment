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
    for (int i = 0; i < size - 1; i++)
    {
        bool flag = false;
        for (int j = 0; j < size; j++)
        {
            if (i == j)
                continue;
            else if (arr[i] == arr[j])
            {
                flag = true;
                break;
            }
            else
            {
                flag = false;
            }
        }
        if (flag == false)
        {
            cout << arr[i];
            break;
        }
    }
}