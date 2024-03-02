#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <stdio.h>
#include <stdlib.h>

typedef char ElementType;

typedef struct tagSBTNode{
    struct tagSBTNode* left;
    struct tagSBTNode* right;

    ElementType data;
    
    
} SBTNode;

SBTNode* sbt_createNode(ElementType newData);
void sbt_destroyNode(SBTNode* node);
void sbt_destroyTree(SBTNode* root);

void sbt_preorderPrintTree(SBTNode* node);
void sbt_inorderPrintTree(SBTNode* node);
void sbt_postOrderPrintTree(SBTNode* node);


#endif 