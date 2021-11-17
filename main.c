#include <stdio.h>
#include "my_mat.c"
#include "my_mat.h"

// testing
int main()
{
    char choice;
    do
    {
        if (scanf(" %c", &choice) == 1)
        {
            switch (choice)
            {
            case 'A':
                scan_parameters();
                break;

            case 'B':
                check_path();
                break;

            case 'C':
                shortest_path();
                break;

            case 'D':
                break;
            }
        }

    } while (choice != 'D');
    return 0;
}