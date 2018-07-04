#include "my.h"

dataCollection* constructDataCollection(){
   dataCollection* myStack = malloc(sizeof(dataCollection*));
   myStack->top = -1;
   myStack->maxCapacity = 26;
   myStack->array = calloc(myStack->maxCapacity,sizeof(VERTEX*));
   return myStack;
}
