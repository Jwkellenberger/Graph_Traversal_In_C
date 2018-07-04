#include "my.h"

void breadthFirstSearch(VERTEX* array, int size){

   int i =0;
   dataCollection* queue = constructDataCollection();
   VERTEX* tempVert;
   EDGE* edgePointer;
   printf("\nBreadth First Search\n\n   ");
   for(i; i<size && array[i].id != '-'; i++){

      if(!(array[i].isVisited)){

         push(queue, &array[i]);
      }
      while(!(isEmpty(queue))){

         tempVert = removeFirst(queue);
         edgePointer = tempVert->edges;
         while(edgePointer != NULL){

            if(!(edgePointer->vertex->isVisited)){
               push(queue, edgePointer->vertex);
               edgePointer = edgePointer->edges;
            }
            else{
               edgePointer = edgePointer->edges;
            }
         }
      }
   }

   printf("\n\n");
   resetIsVisited(array, size);
}
