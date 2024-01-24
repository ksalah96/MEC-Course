#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int mat[n][m];
    for(int r = 0; r < n; r++)
    {
        for(int c = 0; c < m; c++)
        {
            cin >> mat[r][c];
        }
    }
    for(int r = 0; r < n; r++)
    {
        for(int d = m - 1 ; d >= 0; d--)
        {
            cout << mat[r][d] << " ";
        }
        cout << endl;
    }
    return 0;
}
