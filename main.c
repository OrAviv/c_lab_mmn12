#include <stdio.h>
#include "adjacency.h"



int main() {
    adjmat my_matrix = {0};
    int row = 0;
    int column = 0;

    printf("Hello! the matrix size is: %d \n", N);
    printf("Please insert matrix values in the following form: \n"
           "\"x y\" to set the value in [x][y] to 1; \n"
           "When you finished, insert -\"-1 -1\" to continue;\n");

    while (scanf("%d %d", &row, &column) != EOF)
    {
        if (row == -1 && column == -1)
            break;
        /*as instructed - assuming that input values are valid*/
        my_matrix[row][column] = 1;
    }
    print_my_matrix(my_matrix);

    printf("Please enter index's to validate if the index's value is TRUE or FAlSE;\n"
           "if you finished, enter - \"-1 -1\" as so to continue. \n");
    while (scanf("%d %d", &row, &column) != EOF)
    {
        if (row == -1 && column == -1)
            break;

        if (path(my_matrix, row, column) == TRUE)
            printf("value in: matrix[%d][%d] is %d \n",row, column, TRUE);
        else
            printf("value in: matrix[%d][%d] is %d \n",row, column, FALSE);

    }








    return 0;
}