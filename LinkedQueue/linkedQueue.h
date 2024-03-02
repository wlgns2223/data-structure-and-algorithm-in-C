#ifndef LINKED_QUEUE_H
#define LINKED_QUEUE_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct tagNode{
    char* data;
    struct tagNode* nextNode;
} Node;

typedef struct tagLinkedQueue{
    Node* front;
    Node* rear;
    int count;
} LinkedQueue;

void lq_createQueue(LinkedQueue** queue);
void lq_destroyQueue(LinkedQueue* queue);

Node* lq_createNode(char* data);
void lq_destoryNode(Node* node);

void lq_enqueue(LinkedQueue* queue, Node* newNode);
Node* lq_dequeue(LinkedQueue* queue);

int lq_isEmpty(LinkedQueue* queue);


#endif