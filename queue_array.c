#include "item.h"
#include "queue.h"
#include <stdlib.h>
#define MAXQUEUE 50

struct queue{
    Item array[MAXQUEUE];
    int head;
    int tail;
};

Queue newQueue(){
    Queue newCoda = malloc(sizeof(struct queue));
    newCoda -> head = 0;
    newCoda -> tail = 0;
    return newCoda;
}

int isEmptyQueue(Queue q){
    return (q->head == q->tail);
}

int enqueue(Queue q, Item e){
    if((q->tail+1)%MAXQUEUE == q->head)
        return 0;
    q->array[q->tail] = e;
    q->tail = (q->tail+1)%MAXQUEUE;
    return 1;
}

Item dequeue(Queue q){
    if(isEmptyQueue(q))
        return NULL;
    Item item = q->array[q->head];
    q->head = (q->head+1)%MAXQUEUE;
    return item;
}

void printQueue(Queue q){
    int i;
    for (i = q->head; i != q->tail; i = (i+1)%MAXQUEUE){
        outputItem(q->array[i]);
    }
}

