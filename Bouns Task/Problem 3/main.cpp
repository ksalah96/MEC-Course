    #include <iostream>
    #include <string>

    using namespace std;

    int main()
    {
        string str;
        cin >> str;
        int cntr = 0, cntr2= 0;
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] >= 'a' && str[i] <= 'z')
                cntr++;
            else if(str[i] >= 'A' && str[i] <= 'Z')
                cntr2++;
        }
        if(cntr >= cntr2)
        {
            for(int i = 0; i < str.size(); i++)
            {
                str[i] = tolower(str[i]);
                cout << str[i];
        }
        }
        else
        {
            for(int i = 0; i < str.size(); i++)
            {
                str[i] = toupper(str[i]);
                cout << str[i];
            }
        }
        return 0;
    }
