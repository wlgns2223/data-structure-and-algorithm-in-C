#include "linkedQueue.h"

void lq_createQueue(LinkedQueue** queue){

    (*queue) = (LinkedQueue*)malloc(sizeof(LinkedQueue));
    (*queue)->front = NULL;
    (*queue)->rear = NULL;
    (*queue)->count = 0;
}

void lq_destroyQueue(LinkedQueue* queue){

    while(!lq_isEmpty(queue)){
        Node* popped = lq_dequeue(queue);
        lq_destoryNode(popped);
    }
    free(queue);
}

Node* lq_createNode(char* data){

    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = (char*)malloc(strlen(data)+1);

    strcpy(newNode->data,data);

    newNode->nextNode = NULL;

    return newNode;
}
void lq_destoryNode(Node* node){
    free(node->data);
    free(node);
}

void lq_enqueue(LinkedQueue* queue, Node* newNode){
    if(queue->front == NULL){
        queue->front = newNode;
        queue->rear = newNode;
        queue->count++;
    }  else {
        queue->rear->nextNode=newNode;
        queue->rear = newNode;
        queue->count++;
    }
}

Node* lq_dequeue(LinkedQueue* queue){
    Node* front = queue->front;

    if(queue->front->nextNode == NULL){
        queue->front = NULL;
        queue->rear = NULL;
    } else {
        queue->front = queue->front->nextNode;
    }
    queue->count--;
    return front;
}

int lq_isEmpty(LinkedQueue* queue){
    return (queue->front == NULL);
}
