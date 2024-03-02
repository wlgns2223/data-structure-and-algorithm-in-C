#include "unionFind.h"

void ds_unionSet(DisjointSet* set1, DisjointSet* set2){
    set2 = ds_findSet(set2);
    set2->parent = set1;
}

DisjointSet* ds_findSet(DisjointSet* set){
    while(set->parent != NULL){
        set = set->parent;
    }

    return set;
}

DisjointSet* ds_makeSet(void* newData){
    DisjointSet* newNode = (DisjointSet*)malloc(sizeof(DisjointSet));
    newNode->data = newData;
    newNode->parent = NULL;

    return newNode;
}

void ds_destroySet(DisjointSet* set){
    free(set);
}
