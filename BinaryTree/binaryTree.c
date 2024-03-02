#include "binaryTree.h"

SBTNode* sbt_createNode(ElementType newData){
    SBTNode* newNode = (SBTNode*)malloc(sizeof(SBTNode));

    newNode->left = NULL;
    newNode->right = NULL;
    newNode->data = newData;

    return newNode;
}

void sbt_destroyNode(SBTNode* node){
    free(node);
}

void sbt_destroyTree(SBTNode* node){
    if(node == NULL){
        return;
    }

    sbt_destroyNode(node->left);
    sbt_destroyNode(node->right);
    sbt_destroyNode(node);
}

void sbt_preorderPrintTree(SBTNode* node){
    if(node == NULL){
        return;
    }

    printf(" %c", node->data);

    sbt_preorderPrintTree(node->left);
    sbt_preorderPrintTree(node->right);
}

void sbt_inorderPrintTree(SBTNode* node){
    if(node == NULL){
        return;
    }

    sbt_inorderPrintTree(node->left);

    printf(" %c",node->data);

    sbt_inorderPrintTree(node->right);
}

void sbt_postOrderPrintTree(SBTNode* node){
    if(node == NULL){
        return;
    }

    sbt_postOrderPrintTree(node->left);
    sbt_postOrderPrintTree(node->right);

    printf(" %c", node->data);
}