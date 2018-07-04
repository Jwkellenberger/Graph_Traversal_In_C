#include "my.h"

void resetIsVisited(VERTEX* array, int arraySize){

   int i = 0;
   for(i; i<arraySize && array[i].id != '-'; i++){

      array[i].isVisited = false;
   }
}
