#include "my.h"

VERTEX* pop(dataCollection* myStack){
   VERTEX* temp = (myStack->array[myStack->top--]);
   //printf("%c was poped from the stack\n", temp->id);
   return temp;
}
