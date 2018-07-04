#include "my.h"

void insert(dataCollection* myQueue, VERTEX* addVert){

   addVert->isVisited = true;
   myQueue->array[++(myQueue->top)] = addVert;
}
