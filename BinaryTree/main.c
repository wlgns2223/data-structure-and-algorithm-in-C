#include "binaryTree.h"

int main(){
    SBTNode* a = sbt_createNode('a');
    SBTNode* b = sbt_createNode('b');
    SBTNode* c = sbt_createNode('c');
    SBTNode* d = sbt_createNode('d');
    SBTNode* e = sbt_createNode('e');
    SBTNode* f = sbt_createNode('f');
    SBTNode* g = sbt_createNode('g');

    a->left =b;
    b->left=c;
    b->right=d;

    a->right=e;
    e->left=f;
    e->right=g;

    printf("preorder...");
    sbt_preorderPrintTree(a);
    printf("\n\n");

    printf("inorder...");
    sbt_inorderPrintTree(a);
    printf("\n\n");

    printf("post order ...");
    sbt_postOrderPrintTree(a);
    printf("\n\n");


    sbt_destroyTree(a);
    
}