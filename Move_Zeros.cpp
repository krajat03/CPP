#include <iostream>
using namespace std;
void moveZeros(int array[], int size)
{
    int i = 0, j = 1;
    while (i < size && j < size)
    {
        if (array[i] == 0 && array[j] == 0)
        {
            j++;
        }
        else if (array[i] == 0 && array[j] != 0)
        {
            swap(array[i], array[j]);
            i++, j++;
        }
        else
        {
            i++, j++;
        }
    }
}

void arrayInput(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void arrayOutput(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int array[size];

    cout << "Enter elements of array:- " << endl;
    arrayInput(array, size);

    cout << "Array is:- " << endl;
    arrayOutput(array, size);
    moveZeros(array, size);

    cout << "After moving all zeors array is:- " << endl;
    arrayOutput(array, size);
}