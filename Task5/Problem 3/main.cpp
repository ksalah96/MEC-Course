#include <iostream>

using namespace std;

int main()
{
    string str;
    cout << "Enter the name: " << endl;
    cin >> str;
    string result= "";
    char prev = '/0';
    for(int i = 0; i < str.size(); i++)
    {
        if(prev != str[i])
        {
            result += str[i];
            prev = str [i];
        }
    }
    cout << "The compact version of the name: " << result << endl;

    return 0;
}
