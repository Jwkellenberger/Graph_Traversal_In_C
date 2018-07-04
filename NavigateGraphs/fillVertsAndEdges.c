#include "my.h"

void fillVertsAndEdges(VERTEX vertArray[], int arraySize, char a, char b){

   VERTEX* pointerVert;
   VERTEX* pointeeVert;

   EDGE* navigateEdgeChain;
   EDGE* additionEdge;

   int i = 0;

   bool uniqueEdge = true;


   pointerVert = pointerInArray(vertArray, arraySize, a);
   pointeeVert = pointerInArray(vertArray, arraySize, b);

   //printf("%c %c\n",pointerVert->id, pointeeVert->id);

   createEdgeBetweenVerts(pointerVert, pointeeVert);

   //printf("%c -> %c\n", pointerVert->id, pointerVert->edges->vertex->id);
}
