#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter a Number:" << endl;
    cin >> num;
    if(num < 0)
    {
        cout << "The Number is Negative" << endl;
    }
    else if (num > 0)
    {
        cout << "The Number is positive" << endl;
    }
    else
    {
        cout << "The Number is zero" << endl;
    }
    return 0;
}
