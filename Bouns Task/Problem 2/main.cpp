#include <iostream>

using namespace std;

bool div(int weight);
int main()
{
    int w;
    cin >> w;
    if (div(w))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
bool div(int weight)
{
    for(int i = 1; i < weight; i++)
    {
        for(int j = 1; j < weight; j++)
        {
            if((i % 2 == 0) && (j % 2 == 0) && (i + j == weight))
               {
                   return true;
               }
        }
    }
    return false;
}
