#include <iostream>

using namespace std;


int main()
{
    cout << "Enter row then column for the first matrix: " << endl;
    int r1, c1;
    cin >> r1 >> c1;

    int mat1[r1][c1];
    cout << "Enter element of matrix " << endl;

    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c1; j++)
        {
            cin >> mat1[i][j];
        }
    }


    int opera;
    cout << "Choose a operator: " << endl
         << "1 for add"  << endl
         << "2 for multiply" << endl
         << "3 for subtract" << endl
         << "4 for transpose" << endl;
         cin >> opera;


         if (opera == 1 || opera == 2 || opera == 3)
    {
             cout << "Enter row then column for second matrix: " << endl;
            int r2, c2;
            cin >> r2 >> c2;
            int mat2[r2][c2];
            cout << "Enter element of the second matrix " << endl;
            for(int i = 0; i < r2; i++)
            {
                for(int j = 0; j < c2; j++)
                {
                    cin >> mat2[i][j];
                }
            }



         if(opera == 1)
         {
             if(r1 != r2 || c1 != c2)
                cout << "Error !! Should the same row and the same column";
             else
             {
             int mat3[r1][c1];

             for(int i = 0; i < r1; i++)
            {
                for(int j = 0; j < c1; j++)
                {
                    mat3[i][j] = mat1[i][j] + mat2[i][j];
                }
            }
            cout << "The result is: " << endl;
            for(int i = 0; i < r1; i++)
            {
                for(int j = 0; j < c1; j++)
                {
                    cout << mat3[i][j] << " ";
                }
                cout << endl;
            }
         }
        }



         else if(opera == 2)
         {

             if(c1 != r2)
                cout << "Error !! Should the first column the same of the second row";

                else
             {
                 int mat3[r1][c2];

                 for(int i = 0; i < r1; i++)
                 {
                     for(int j =0; j < c2; j++)
                     {
                         mat3[i][j] = 0;
                     }
                 }
                 for(int i = 0; i < r1; i++)
                 {
                    for(int j = 0; j < c2; j++)
                    {
                        for(int k = 0; k < c1; k++)
                        {
                            mat3[i][j] += mat1[i][k] * mat2[k][j];
                        }
                    }
                 }
                 for(int i = 0; i < r1; i++)
                 {
                     for(int j =0; j < c2; j++)
                     {
                         cout << mat3[i][j] << " ";
                     }
                     cout << endl;
                 }
             }
         }



         else if(opera == 3)
         {
             if(r1 != r2 || c1 != c2)
                cout << "Error !!  Should the same row and the same column";
                else
                {
             int mat3[r1][c1];

             for(int i = 0; i < r1; i++)
            {
                for(int j = 0; j < c1; j++)
                {
                    mat3[i][j] = mat1[i][j] - mat2[i][j];
                }
            }
            cout << "The result is: " << endl;
            for(int i = 0; i < r1; i++)
            {
                for(int j = 0; j < c1; j++)
                {
                    cout << mat3[i][j] << " ";
                }
                cout << endl;
            }
         }
        }
    }



    else if(opera == 4)
    {
        int mat2[c1][r1];
        for(int i = 0; i < r1; i++)
        {
            for(int j = 0; j < c1; j++)
            {
                mat2[j][i] = mat1[i][j];
            }
        }
        for(int i = 0; i < c1; i++)
        {
            for(int j = 0; j < r1; j++)
            {
               cout <<  mat2[i][j] << " ";
            }
            cout << endl;
        }
    }


    return 0;
}
