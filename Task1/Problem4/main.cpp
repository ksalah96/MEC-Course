#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter a, b, c to know kind of triangle" << endl;
    cin >> a >> b >> c;
    if (a == b && a == c && b == c)
    {
        cout << "The triangle is Equilateral" << endl;
    }
    else if (a == b && a != c && b != c)
    {
        cout << "The triangle is Isosceles" << endl;
    }
    if (a != b && a != c && b != c)
    {
        cout << "The triangle is Scalene" << endl;
    }


    return 0;
}
