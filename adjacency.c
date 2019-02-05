//
// Created by Or Aviv on 2019-02-05.
//

#include "adjacency.h"

/*path will find a father & son relationship through a recursive way,
 *     implemented one step at a time - for every father & son relationship found, path will run again until the
 *     the desire father & son relationship found, or util it reaches the bottom of the tree.*/
int path(int matrix[N][N] ,int u, int v)
{
    if(matrix[u][v] == TRUE)
        return TRUE;
    else
    {
        for (int i = 0; i < N; i++)
        {
            if(matrix[u][i] == TRUE)
                if(path(matrix, i, v) == TRUE)
                    return TRUE;
        }
        return FALSE;
    }
}

/*print_my_matrix described in the corresponding .h file. */
void print_my_matrix(adjmat matrix)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d  ",matrix[i][j]);
        }
        printf("\n");
    }
}