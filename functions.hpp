#pragma once
int const n = 5;
namespace mt
{
    void Read(int matr[n][n], int n);
    void PrintMatrix(int matr[100][100], int n);
    void MiniMax(int matr[100][100], int n);
    int Mini(int matr[100][100], int n);
    int Maxi(int matr[100][100], int n);
    int StrSum(int matr[100][100], int n, int i);
    void SortMatrix(int matr[100][100], int n);
}