#include "CircularQueue.h"

int main(int argc, const char * argv[]) {
    
    CircularQueue* queue;
    cq_createQueue(&queue,10);

    cq_enqueue(queue,1);
    cq_enqueue(queue,2);
    cq_enqueue(queue,3);
    cq_enqueue(queue,4);

    for(int i=0; i<3; i++){
        printf("dequeue: %d, ", cq_dequeue(queue));
        printf("front: %d, rear: %d\n",queue->front, queue->rear);
    }

    int i = 100;
    while(cq_isFull(queue) == 0){
        cq_enqueue(queue,i++);
    }

    printf("capacity: %d, Size: %d\n\n", queue->capacity,cq_getSize(queue));

    while(cq_isEmpty(queue) == 0){
        printf("dequeue: %d", cq_dequeue(queue));
        printf("front: %d, rear: %d\n",queue->front, queue->rear);
    }

    cq_destoryQueue(queue);
    
    return 0;
}
