#include "my.h"

void createEdgeBetweenVerts(VERTEX* pointer, VERTEX* pointee){

   EDGE* navigateEdgeChain;
   EDGE* lastViableEdge = NULL;
   EDGE* additionEdge;

   bool trackEdgeLoop = false;
   bool uniqueEdge = true;
   bool firstEdgeOnVert = false;

   navigateEdgeChain = (*pointer).edges;

   if(navigateEdgeChain == NULL){
      firstEdgeOnVert = true;
   }

   while(!trackEdgeLoop && !firstEdgeOnVert){

      if(navigateEdgeChain == NULL){   //->vertex->id == '-'){

         trackEdgeLoop = true;
      }
      else if(navigateEdgeChain->vertex->id == pointee->id){ //(*(*navigateEdgeChain).vertex).id == (*pointee).id){

         trackEdgeLoop = true;
         uniqueEdge = false;
      }
      if(!trackEdgeLoop){

         lastViableEdge = navigateEdgeChain;
         navigateEdgeChain = (*navigateEdgeChain).edges;
      }
   }

   if(uniqueEdge){

      additionEdge = (EDGE*) malloc(sizeof(EDGE*));
      (*additionEdge).vertex = pointee;
      (*additionEdge).edges = NULL;
      //(*additionEdge).edges = (*pointer).edges;
      //(*pointer).edges = additionEdge;

      if(firstEdgeOnVert){
         pointer->edges = additionEdge;
      }
      else if(lastViableEdge != NULL){
         lastViableEdge->edges = additionEdge;
      }
      //printf("%c -> %c (added?%c)\n", pointer->id, pointer->edges->vertex->id, additionEdge->vertex->id);
   }
}
