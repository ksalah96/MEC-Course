#include <iostream>

using namespace std;

int main()
{
    int n, a;
    cout << "Enter the number: ";
    cin >> n;
    a = n * n;
    int s = 1;
    for (int i = 1; i <= n; i++)
    {
        for(int i = 1; i <= n; i++)
        {
            cout << s << "\t";
            s++;
        }
        cout << endl;
    }
    return 0;
}
