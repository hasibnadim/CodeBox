// #1772B

#include <bits/stdc++.h>
using namespace std;

bool isBeautiful(int mat[2][2])
{
   bool validRow = mat[0][0] < mat[0][1] && mat[1][0] < mat[1][1];
   bool validCol = mat[0][0] < mat[1][0] && mat[0][1] < mat[1][1];
   return validRow && validCol;
}

void rotateMatrix(int mat[2][2]){
    // rotate 2x2 matrix clockwise 90deg
    int temp = mat[0][0];
    mat[0][0] = mat[1][0];
    mat[1][0] = mat[1][1];
    mat[1][1] = mat[0][1];
    mat[0][1] = temp;
}

int main()
{
    int t;
    cin >> t;
    int mat[2][2];
    while (t--)
    {
        // input 2*2 marix
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                cin >> mat[i][j];

        bool isBeautifulFlag = false;
        for (int i = 0; i < 4; i++)
        {
            // rotate matrix 4 times
            rotateMatrix(mat);
            if (isBeautiful(mat))
            {
                isBeautifulFlag = true;
                break;
            }
        }
        if (isBeautifulFlag)
        {
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }

    return 0;
}