//
// Created by Or Aviv on 2019-02-05.
//
#include <stdio.h>

#ifndef MAMAN12_ADJACENCY_H
#define MAMAN12_ADJACENCY_H
#define TRUE 1
#define FALSE 0
#define N 20

typedef int adjmat[N][N];

int path(int matrix[N][N] ,int u, int v);
void print_my_matrix(adjmat matrix);

#endif //MAMAN12_ADJACENCY_H
