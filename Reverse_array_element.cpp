#include <iostream>
#include <algorithm>
using namespace std;
void reverse(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int temp = arr[i];
        int rev = 0;
        while (temp != 0)
        {
            int digit = temp % 10;
            rev = rev * 10 + digit;
            temp /= 10;
        }
        arr[i] = rev;
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[6] = {120, -123, 50, 0, 501, -1};
    cout << "\nArray is:- \n-> ";
    printArray(arr, 6);

    reverse(arr, 6);
    cout << "\nAfter reversing array is:- \n-> ";
    printArray(arr, 6);
    
}