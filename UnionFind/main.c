#include "unionFind.h"

int main(){

    int a=1,b=2,c=3,d=4;

    DisjointSet* set1 = ds_makeSet(&a);
    DisjointSet* set2 = ds_makeSet(&b);
    DisjointSet* set3 = ds_makeSet(&c);
    DisjointSet* set4 = ds_makeSet(&d);

    ds_unionSet(set1,set3);
    printf("Set1 == Set3: %d\n",ds_findSet(set1) == ds_findSet(set2));
}