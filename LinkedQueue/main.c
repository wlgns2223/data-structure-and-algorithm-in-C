#include "linkedQueue.h"

int main(int argc, const char * argv[]) {

    Node* popped;
    LinkedQueue* queue;

    lq_createQueue(&queue);

    lq_enqueue(queue,lq_createNode("abc"));
    lq_enqueue(queue,lq_createNode("def"));
    lq_enqueue(queue,lq_createNode("efg"));
    lq_enqueue(queue,lq_createNode("hij"));

    printf("queue size: %d\n",queue->count);

    while(lq_isEmpty(queue) == 0){
        popped = lq_dequeue(queue);

        printf("dequeue: %s\n",popped->data);

        lq_destoryNode(popped);
    }

    lq_destroyQueue(queue);
    
    
    
    return 0;
}
