#include <iostream>
#include <climits>
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
    int max = INT_MIN;
    int smax = INT_MIN;
    int thirdmax = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            thirdmax = smax;
            smax = max;
            max = arr[i];
        }
        else if(arr[i]>smax && arr[i]!= max){
            thirdmax = smax;
            smax = arr[i];
        }
        else if(arr[i]>thirdmax && arr[i]!= (smax && max))
            thirdmax = arr[i];
    }
    cout << "max element:"<<max<<endl;
    cout << "secondd max element:"<<smax<<endl;
    cout << "third max element:"<<thirdmax<<endl;
}