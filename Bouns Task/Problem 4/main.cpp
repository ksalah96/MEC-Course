#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int cntr = 0;
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if(b > a)
            cntr++;
        if(c > a)
            cntr++;
        if(d > a)
            cntr++;
            cout << cntr << endl;
    }

    return 0;
}
