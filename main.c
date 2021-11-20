#include <stdio.h>
#include "my_mat.h"

int main()
{
    char choice;
    while (choice != 'D')
    {
        scanf(" %c", &choice);
        switch (choice)
        {
        case 'A':
            scan_parameters();
            break;

        case 'B':
            shortest_path();
            break;

        case 'C':
            check_path();
            break;

        case 'D':
            break;
        default:
            break;
        }
    }
    return 0;
}