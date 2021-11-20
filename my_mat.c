#include <stdio.h>
#include "my_mat.h"

int mat[SIZE][SIZE];

int min(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }
    if (a == 0 && b == 0)
    {
        return 0;
    }
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

void scan_parameters()
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    find();
}

void shortest_path()
{
    int k, j;
    scanf("%d%d", &k, &j);
    if (mat[k][j] != 0)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}

void check_path()
{
    int x, y;
    scanf("%d%d", &x, &y);
    if (mat[x][y] == 0 || x == y)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n", mat[x][y]);
    }
}

void find()
{
    for (int k = 0; k < SIZE; k++)
    {
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
            {
                if (i == j)
                {
                    mat[i][i] = 0;
                }
                else if (i == k || j == k)
                {
                    mat[i][j] = mat[i][j];
                }
                else
                {
                    int val = mat[i][k] + mat[k][j];
                    if (mat[i][k] == 0 || mat[k][j] == 0)
                    {
                        val = 0;
                    }
                    mat[i][j] = min(mat[i][j], val);
                }
            }
        }
    }
}

