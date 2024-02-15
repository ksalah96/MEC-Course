#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int cntr = 0;
    while(t--)
    {
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
