#include "my.h"

void depthFirstSearch(VERTEX* array, int arraySize){

   int i = 0;
   dataCollection* stack = constructDataCollection();
   VERTEX* tempVert;
   EDGE* edgePointer = NULL;
   printf("\nDepth First Search\n\n   ");
   for(i; i< arraySize && array[i].id != '-'; i++){

      if(!(array[i].isVisited)){
         push(stack,&array[i]);
      }
      while(!(isEmpty(stack))){

         tempVert = peek(stack);

         edgePointer = tempVert->edges;
         tempVert = NULL;
         while(edgePointer !=NULL && tempVert == NULL){
            if(edgePointer->vertex->isVisited){
               edgePointer = edgePointer->edges;
            }
            else{

               tempVert = edgePointer->vertex;
            }
         }

         if(tempVert ==NULL){
            pop(stack);
         }
         else{
            push(stack, tempVert);
         }
      }
   }
   resetIsVisited(array,arraySize);
   printf("\n\n");
}
