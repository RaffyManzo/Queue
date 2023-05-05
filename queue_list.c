#include "item.h"
#include "queue.h"
#include "list.h"
#include <stdlib.h>

struct queue{
    List list;
};

Queue newQueue(){
    Queue newCoda = malloc(sizeof(struct queue));
    newCoda -> list = newList();
    return newCoda;
}

int isEmptyQueue(Queue q){
    return isEmpty(q->list);
}

int enqueue(Queue q, Item e){
    return addListTail(q->list, e);
}

Item dequeue(Queue q){
    return removeHead(q->list);
}

void printQueue(Queue q){
    printList(q->list);
}

