#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "enter size";
    cin >> size;
    int esum  = 0;
    int osum  = 0;
    cout << "enter element of array";
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        if (i%2==0)
            esum+=arr[i];
        else
            osum+=arr[i];                                                                                                                     
    }
    cout << esum-osum;
}