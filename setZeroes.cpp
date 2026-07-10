#include <iostream>
#include <vector>
using namespace std;

// void setZeroes(vector<vector<int>> &matrix)
// {
//     int m = matrix.size(),
//         n = matrix[0].size();
//     vector<int> col(n, 0), row(m, 0);

//     for (int i = 0; i < m; i++)
//         for (int j = 0; j < n; j++)
//         {
//             if (matrix[i][j] == 0)
//             {
//                 col[j] = 1;
//                 row[i] = 1;
//             }
//         }
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (row[i] == 1 || col[j] == 1)
//             {
//                 matrix[i][j] = 0;
//             }
//         }
//     }
// }

void setZeroes(vector<vector<int>> &matrix)
{
    int row = matrix.size(),
        col = matrix[0].size();

    bool FirstRowHasZeroes = false, firstColHasZeroes = false;
    for (int i = 0; i < row; i++)
        if (matrix[i][0] == 0)
            FirstRowHasZeroes = true;
    for (int i = 0; i < col; i++)
        if (matrix[0][i] == 0)
            firstColHasZeroes = true;
    for (int i = 1; i < row; i++)
    {
        for (int j = 1; j < col; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][0] = 0; // marking in first col
                matrix[0][j] = 0; // makring in first row
            }
        }
    }

    for (int i = 1; i < row; i++)
    {
        for (int j = 1; j < col; j++)
        {
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
            {
                matrix[i][j] = 0;
            }
        }
    }
    if (FirstRowHasZeroes)
    {
        for (int i = 0; i < row; i++)
        {
            matrix[i][0] = 0;
        }
    }
    if (firstColHasZeroes)
    {
        for (int i = 0; i < col; i++)
        {
            matrix[0][i] = 0;
        }
    }
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 1, 2},
        {3, 0, 4},
        {5, 1, 6},
        {7, 1, 8}};
    setZeroes(matrix);
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}