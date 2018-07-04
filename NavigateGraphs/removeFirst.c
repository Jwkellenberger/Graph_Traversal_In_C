#include "my.h"

VERTEX* removeFirst(dataCollection* myQueue){

   int i = 0;
   VERTEX* temp = myQueue->array[0];
   for(i; i< myQueue->top; i++){

      myQueue->array[i] = myQueue->array[i+1];
   }
   myQueue->top--;
   //printf("%c was removed from the front of queue\n", temp->id);
   return temp;
}
