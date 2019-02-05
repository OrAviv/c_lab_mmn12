//
// Created by Or Aviv on 2019-02-05.
//
#include <stdio.h>

#ifndef MAMAN12_ADJACENCY_H
#define MAMAN12_ADJACENCY_H
#define TRUE 1
#define FALSE 0
#define N 7


/*adjacency contains two functions - *path* and *print_my_matrix*
 *path - for a given two dimension matrix and pair of index's path will return TRUE (=1)
 *       if there is any father & son relationship.
 *print_my_matrix - help function which prints the matrix in a two dimension, readable form.*/
typedef int adjmat[N][N];

int path(int matrix[N][N] ,int u, int v);
void print_my_matrix(adjmat matrix);

#endif //MAMAN12_ADJACENCY_H
