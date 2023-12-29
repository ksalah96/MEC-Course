#include <iostream>

using namespace std;

int main()
{
    int n, i, c = 0;
    cout << "Enter The number: ";
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            c++;
        }
    }
    if(c == 2)
    {
        cout << "The number is prime";
    }
    else
    {
        cout << "The number is not Prime";
    }
    return 0;
}
