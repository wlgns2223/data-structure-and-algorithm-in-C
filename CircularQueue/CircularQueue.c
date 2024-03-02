//
//  CircularQueue.c
//  ds
//
//  Created by 심지훈 on 2/9/24.
//

#include "CircularQueue.h"

void cq_createQueue(CircularQueue** queue, int capacity){
    
    (*queue) = (CircularQueue*)malloc(sizeof(CircularQueue));
    (*queue)->nodes = (Node*)malloc(sizeof(Node) * (capacity+1));

    (*queue)->capacity = capacity;
    (*queue)->front = 0;
    (*queue)->rear = 0;
}


void cq_destoryQueue(CircularQueue* queue){
    free(queue->nodes);
    free(queue);
}

void cq_enqueue(CircularQueue* queue, ElementType data){
    int position = 0;

    if(queue->rear == queue->capacity){
        position = queue->rear;
        queue->rear = 0;

    } else {
        position = queue->rear++;
    }

    queue->nodes[position].data = data;
}

ElementType cq_dequeue(CircularQueue* queue){
    int position = queue->front;
    
    if(queue->front == queue->capacity){
        queue->front = 0;
    } else {
        queue->front++;
    }

    return queue->nodes[position].data;
}

int cq_getSize(CircularQueue* queue){
    if(queue->front <= queue->rear){
        return queue->rear - queue->front;
    } else {
        return queue->rear + (queue->capacity - queue->front) + 1;
    }
}

int cq_isFull(CircularQueue* queue){
    if(queue->front  < queue->rear){
        return (queue->rear - queue->front) == queue->capacity;
    } else {
        return (queue->rear + 1) == queue->front;
    }
}

int cq_isEmpty(CircularQueue* queue){
    return (queue->front == queue->rear);
}