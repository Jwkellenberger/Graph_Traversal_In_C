#include "my.h"

void displayAdjacencyList(VERTEX vertArray[], int arraySize){

   printf("\n\nAdjacency List:\n");
   EDGE* traversalEdge;
   int edgeCt = 0;
   int index = 0;

   for(index; vertArray[index].id != '-' && index< arraySize; index++){

      printf("\n    %c -> ", vertArray[index].id);

      traversalEdge = vertArray[index].edges;

      //if(traversalEdge == NULL){printf("\n childisNull \n");}
      //if(traversalEdge != NULL){printf("\n vas is problem?\n");}
      //if(index == 14){printf("%c", traversalEdge->vertex->id);}

      for(edgeCt=0; traversalEdge !=NULL; edgeCt++){

         if(edgeCt>0){ printf(", ");}
         printf("%c", traversalEdge->vertex->id);
         traversalEdge = traversalEdge->edges;
      }

   }
   printf("\nDone\n\n");
}