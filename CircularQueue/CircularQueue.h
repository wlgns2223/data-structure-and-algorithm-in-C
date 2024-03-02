//
//  CircularQueue.h
//  ds
//
//  Created by 심지훈 on 2/9/24.
//

#ifndef CircularQueue_h
#define CircularQueue_h

#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

typedef struct tagNode{
    ElementType data;
} Node;

typedef struct tagCircularQueue{
    int capacity;
    int front;
    int rear;
    
    Node* nodes;
} CircularQueue;

void cq_createQueue(CircularQueue** queue, int capacity);
void cq_destoryQueue(CircularQueue* queue);
void cq_enqueue(CircularQueue* queue,ElementType data);
ElementType cq_dequeue(CircularQueue* queue);
int cq_getSize(CircularQueue* queue);
int cq_isEmpty(CircularQueue* queue);
int cq_isFull(CircularQueue* queue);


#endif /* CircularQueue_h */
