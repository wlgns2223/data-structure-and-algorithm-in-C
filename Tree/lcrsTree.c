#include "lcrsTree.h"

LCRSNode* lcrs_create(ElementType newData){
    LCRSNode* newNode = (LCRSNode*)malloc(sizeof(LCRSNode));
    newNode->leftChild = NULL;
    newNode->rightSibling = NULL;
    newNode->data = newData;

    return newNode;
}

void lcrs_destroyNode(LCRSNode* node){
    free(node);
}

void lcrs_destroyTree(LCRSNode* root){
    if(root->rightSibling != NULL){
        lcrs_destroyTree(root->rightSibling);
    }

    if(root->leftChild != NULL){
        lcrs_destroyTree(root->leftChild);
    }

    root->leftChild = NULL;
    root->rightSibling = NULL;

    lcrs_destroyNode(root);
}

void lcrs_addChildNode(LCRSNode* parent, LCRSNode* child){
    if(parent->leftChild == NULL){
        parent->leftChild = child;
    } else {
        LCRSNode* tempNode = parent->leftChild;
        while (tempNode->rightSibling != NULL){
            tempNode = tempNode->rightSibling;
        }

        tempNode->rightSibling = child;
    }
}

void lcrs_printTree(LCRSNode* node, int depth){
    
    for(int i=0; i<depth-1; i++){
        printf("   ");
    }

    if(depth>0){
        printf("+--");
    }

    printf("%c\n",node->data);

    if(node->leftChild != NULL){
        lcrs_printTree(node->leftChild, depth+1);
    }
    
    if(node->rightSibling != NULL){
        lcrs_printTree(node->rightSibling,depth);
    }

}