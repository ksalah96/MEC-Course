#include <iostream>

using namespace std;

int main()
{
    int n, a = 2, sum = 0;
    cout << "Enter the number "<< endl;
    cin >> n;
    do
    {
        sum = sum + a;
        a += 2;
    } while (a <= n);

    cout << "The sum of all even " << sum << endl;

    return 0;
}
