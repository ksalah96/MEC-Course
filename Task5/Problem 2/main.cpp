#include <iostream>

using namespace std;

int main()
{
    int n,h,v;
    cout << "Enter the length of the sides: " << endl;
    cin >> n;
    cout <<"Enter the horizontal: " << endl;
    cin >> h;
    cout <<"Enter the vertical: " << endl;
    cin >> v;
    int p1 = h * v;
    int p2 = h * (n - v);
    int p3 = (n - h) * v;
    int p4 = (n - h) * (n - v);
    int maxx1 = max(p1, p2);
    int maxx2 = max(p3, p4);
    if(maxx1 > maxx2)
    {
        int volume = maxx1 * 4;
        cout <<"The volume of the biggest piece of cake: " << volume << endl;
    }
    else
    {
        int volume = maxx2 * 4;
        cout <<"The volume of the biggest piece of cake: " << volume << endl;
    }
    return 0;
}
