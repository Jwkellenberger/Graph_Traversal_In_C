#include "my.h"

void topologicalSearch(VERTEX* array, int arraySize){

   int i = 0;

   int stringSize = arraySize;
   char* topologicalPath = calloc(stringSize, sizeof(char));

   dataCollection* stack = constructDataCollection();
   VERTEX* tempVert;
   EDGE* edgePointer = NULL;
   printf("\nTopological Sort:\n\n");
   //printf("   ");
   for(i; i< arraySize && array[i].id != '-'; i++){

      if(!(array[i].isVisited)){
         insert(stack,&array[i]);
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
            tempVert = pop(stack);
            //printf("%c ", tempVert->id);
            reversePropString(topologicalPath, &stringSize, tempVert->id);
         }
         else{
            insert(stack, tempVert);
            //printf("%c ", tempVert->id);
            //reversePropString(topologicalPath, &stringSize, tempVert->id);
         }
      }
      //printf("\n");
   }
   resetIsVisited(array,arraySize);
   printReversePropString(topologicalPath,arraySize);
   //printf("Working?\n%s\n\n", topologicalPath);
}
