#ifndef MY_MAT_H_
#define MY_MAT_H_
#define SIZE 10 //size of the matrix

extern int mat[SIZE][SIZE];
extern int i, j;



void scan_parameters();
void shortest_path();
void check_path();
int find(int i, int j);
int min(int a, int b);

