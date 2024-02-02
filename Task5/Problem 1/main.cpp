#include <iostream>

using namespace std;
void fizzbuzz(int num, int a, int b);

int main()
{
    int n, x, y;
    cout << "Enter The number then div1 then div2: " << endl;
    cin>> n >> x >> y;
    fizzbuzz(n, x, y);
    return 0;
}
void fizzbuzz(int num, int div1, int div2)
{
    for(int i = 1; i <=num; i++)
    {
        if(i % div1 == 0 && i % div2 == 0)
            cout << "FizzBuzz" << endl;
        else if(i % div1 == 0)
            cout << "Fizz" << endl;
        else if(i % div2 == 0)
            cout << "Buzz" << endl;
    }

}
