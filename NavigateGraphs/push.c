#include "my.h"

void push(dataCollection* myStack, VERTEX* addVert){

   addVert->isVisited = true;
   myStack->array[++myStack->top] = addVert;
   printf("%c ", myStack->array[myStack->top]->id);
}
