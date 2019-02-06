#include <stdio.h>
#include "adjacency.h"



int main() {
    adjmat my_matrix = {0};
    int row = 0;
    int column = 0;

    printf("Hello! the matrix size is: %d by %d \n", N,N);
    printf("Please insert matrix values in the following form: \n"
           "\"x y\" to set the value in [x][y] to 1; \n"
           "When you finished, insert: \"-1 -1\" to continue.\n");


    /*scaning part*/
    while ((scanf("%d %d", &row, &column)) != EOF)
    {
        if (row == -1 && column == -1)
            break;
        /*as instructed - assuming that input values are valid*/
        if (my_matrix[row][column] == 1)
        {
            printf("value in [%d][%d] already set to 1;",row,column);
            continue;
        }
        my_matrix[row][column] = 1;
    }
    print_my_matrix(my_matrix);

    printf("Please enter pair of index's to validate if the index's obtain father & son relationship;\n"
           "if you finished, enter - \"-1 -1\" as so to continue. \n");

    /*validating part -validation continues as long as EOF or '-1 -1' is not inserted;
     *          validation is made by *path* function, which described in adjacency.c.*/
    while (scanf("%d %d", &row, &column) != EOF)
    {
        if (row == -1 && column == -1)
            break;

        if (path(my_matrix, row, column) == TRUE)
            printf("%d is the father of %d \n",row, column);
        else
            printf("%d is NOT the father of %d \n",row, column);

    }



    return 0;
}
