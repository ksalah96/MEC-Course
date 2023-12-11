#include <iostream>

using namespace std;

int main()
{
    int var1, var2, temp;
    cout << "Enter Var1 and var2: " << endl;
    cin >> var1 >> var2;
     cout << "Before swapping" << endl;
    cout << "Var1 = " << var1 << endl;
    cout << "Var2 = " << var2 << endl;
    temp = var1;
    var1 = var2;
    var2 = temp;
    cout << "After swapping" << endl;
    cout << "Var1 = " << var1 << endl;
    cout << "Var2 = " << var2 << endl;
    return 0;
}
