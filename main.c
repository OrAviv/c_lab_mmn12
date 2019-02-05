#include <stdio.h>
#include "adjacency.h"



int main() {
    adjmat my_matrix = {0};
    int row = 0;
    int column = 0;

    printf("Hello! the matrix size is: %d \n", N);
    printf("Please insert matrix values in the following form: \n"
           "\"x y\" to set the value in [x][y] to 1; \n"
           "When you finished, insert -\"-1 -1\" to continue;");

    while (scanf("%d %d", &row, &column) != EOF)
    {
        if (row == -1 && column == -1)
            break;
        /*as instructed - assuming that input values are valid*/
        my_matrix[row][column] = 1;
    }








    return 0;
}