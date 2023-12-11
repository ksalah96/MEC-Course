#include <iostream>

using namespace std;

int main()
{
    char kind;
    int weight;
    cout << "Enter the kind of child: f or m" << endl;
    cin >> kind;
    cout << "Enter the weight of child:  " << endl;
    cin >> weight;
    if (kind == 'f')
    {
        if (weight >= 2.5 && weight <= 4.5)
            {
                cout << "Baby’s weight is normal" << endl;
            }

            else
                {
                    cout << "Baby’s weight is not normal" << endl;
                }

    }
    else if (kind == 'm')
    {
        if (weight >= 4 && weight <= 5.5)
        {
                cout << "Baby’s weight is normal" << endl;
        }
        else
                {
                    cout << "Baby’s weight is not normal" << endl;
                }
    }
}
