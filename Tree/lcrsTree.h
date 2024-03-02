#ifndef LCRS_TREE_H
#define LCRS_TREE_H

#include <stdio.h>
#include <stdlib.h>

typedef char ElementType;

typedef struct tagLCRSNode{
    struct tagLCRSNode* leftChild;
    struct tagLCRSNode* rightSibling;
    ElementType data;
} LCRSNode;


LCRSNode* lcrs_create(ElementType newData);
void lcrs_destroyNode(LCRSNode* node);
void lcrs_destroyTree(LCRSNode* root);

void lcrs_addChildNode(LCRSNode* parentNode, LCRSNode* childNode);
void lcrs_printTree(LCRSNode* node,int depth);


#endif LCRS_TREE_H