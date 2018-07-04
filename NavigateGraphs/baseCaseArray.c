#include "my.h"

void baseCaseArray(VERTEX vertArray[], int arraySize){

   //VERTEX* nullVert = (VERTEX*) malloc(sizeof(VERTEX*));
   //nullVert->id = '-';
   //EDGE* nullEdge = (EDGE*) malloc(sizeof(EDGE*));
   //nullEdge->vertex = nullVert;

   int i = 0;
   for(i; i<arraySize;i++){

      vertArray[i].id = '-';
      vertArray[i].edges = NULL;
      vertArray[i].isVisited = false;
      //vertArray[i].edges = nullEdge;
   }
}
