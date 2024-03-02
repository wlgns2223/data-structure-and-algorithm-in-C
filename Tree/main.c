#include "lcrsTree.h"

int main(void){

    LCRSNode* root = lcrs_create('a');
    LCRSNode* b = lcrs_create('b');
    LCRSNode* c = lcrs_create('c');
    LCRSNode* d = lcrs_create('d');
    LCRSNode* e = lcrs_create('e');
    LCRSNode* f = lcrs_create('f');
    LCRSNode* g = lcrs_create('g');
    LCRSNode* h = lcrs_create('h');
    LCRSNode* i = lcrs_create('i');
    LCRSNode* j = lcrs_create('j');
    LCRSNode* k = lcrs_create('k');

    lcrs_addChildNode(root,b);
    lcrs_addChildNode(b,c);
    lcrs_addChildNode(b,d);
    lcrs_addChildNode(d,e);
    lcrs_addChildNode(d,f);

    lcrs_addChildNode(root,g);
    lcrs_addChildNode(g,h);

    lcrs_addChildNode(root,i);
    lcrs_addChildNode(i,j);
    lcrs_addChildNode(j,k);

    lcrs_printTree(root,0);

    lcrs_destroyTree(root);

    
}