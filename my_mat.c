#include <stdio.h>
#define SIZE 10 // size of the matrix

int mat[SIZE][SIZE];
int i, j;

int min(int a, int b)
{
    if (a > b)
        return b;
    else
        return a;
}

void find(int i, int j)
{
    for (int k = 0; k < SIZE; k++)
    {
        for (i = 0; i < SIZE; i++)
        {
            for (j = 0; j < SIZE; j++)
            {
                if (i == j)
                    mat[i][j] = 0;
                else
                    mat[i][j] = min(mat[i][j], mat[i][k] + mat[k][j]);
            }
        }
    }
}

void scan_parameters() // *1*
{
    int i, j;
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            scanf("%d", &(mat[i][j])); // save value in array.
        }
    }
}

void check_path() // *2*
{
    scanf("%d %d", &i, &j);
    find(i, j);
    int val = mat[i][j];
    if (val != 0)
        printf("True"); // there is a path betweem i --> j
    else
        printf("False");
}

void shortest_path() // *3*
{
    scanf("%d %d", &i, &j);
    find(i, j);
    int val = mat[i][j];
    if (val != 0)
        printf("%d", val); // there is a path betweem i --> j
    else
        printf("%d", -1); // there isn't a path  betweem i --> j
}
