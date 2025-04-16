#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    bool isPrime = true;
    if (n <= 1)
    {
        cout << "It is not a prime number" << endl;
        exit(0);
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
        cout << "-> It is a prime number" << endl;
    else
        cout << "-> It is not a prime number" << endl;
}