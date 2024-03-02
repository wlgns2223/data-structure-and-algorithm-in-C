#ifndef DISJOINTSET_H
#define DISJOINTSET_H

#include <stdio.h>
#include <stdlib.h>

typedef struct tagDisjointSet {
    struct tagDisjointSet* parent;
    void* data;

} DisjointSet;

void ds_unionSet(DisjointSet* set1, DisjointSet* set2);
DisjointSet* ds_findSet(DisjointSet* set);
DisjointSet* ds_makeSet(void* newData);
void ds_destroySet(DisjointSet* set);


#endif DISJOINTSET_H