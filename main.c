#include "item.h"
#include "queue.h"
#include "list.h"
#include <stdio.h>


int main(){
    Queue coda = newQueue();
    int i;
    for( i = 0; i < 5; i++){
        enqueue(coda, inputItem());
    }
    printf("\n");
    printQueue(coda);

    for(i = 0; i < 6; i++){
        dequeue(coda);
        printf("\n");
        printQueue(coda);
    }
    return 0;
}
