#include "functions.hpp"
#include<iostream>
#include<math.h>
using namespace std;

namespace mt
{
    void Read(int matr[n][n], int n)
    {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; i++)
            {
                cin >> matr[i][j];
            }
    }

    void PrintMatrix(int matr[100][100], int n)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            for (int j = 0; i < n; i++)
            {
                cout << matr[i][j] << " ";
            }
            cout << endl;
    }

    void MiniMax(int matr[100][100], int n)
    {
        int mini = pow(10, 8);
        int maxi = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; i++)
            {
                if (matr[i][j] < mini)
                {
                    mini = matr[i][j];
                }
                if (matr[i][j] > maxi)
                {
                    maxi = matr[i][j];
                }
            }
    }

    int Mini(int matr[100][100], int n)
    {
        int mini = pow(10, 8);
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; i++)
            {
                if (matr[i][j] < mini)
                {
                    mini = matr[i][j];
                }
            }

        return mini;
    }

    int Maxi(int matr[100][100], int n)
    {
        int maxi = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; i++)
            {
                if (matr[i][j] > maxi)
                {
                    maxi = matr[i][j];
                }
            }

        return maxi;
    }
    
    int StrSum(int matr[100][100], int n, int i)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += matr[i][j];
        }
        return sum;
    }

    void SortMatrix(int matr[100][100], int n)
    {
        
        int timenum;
        for (int i = 0; i < n; i++) // строка матрицы
        {
            if (StrSum(matr, n, i))
            {

            }
        }
    }
}


// void print(int *arr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << arr[i*n+j];
//         }
//         cout << endl;
//     }
// }
// int mini(int *matr, int n)
// {
//     int min = pow(10, 7);
//     for (int i = 0; i < n; i++)
//         for (int j = 0; j < n; j++)
//         {
//             if (matr[i*n+j] < min)
//             {
//                 min = matr[i*n+j];
//             }
//         }
// }
