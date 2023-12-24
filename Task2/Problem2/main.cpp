#include <iostream>

using namespace std;

int main()
{
    int n, a = 1;
    cout << "Enter the integer number: ";
    cin >> n;
    cout << "The divisors are: ";
    while (a <= n)
    {

        if (n % a == 0)
        {

            cout << a << " ";
        }
        a++;
    }
    return 0;
}
