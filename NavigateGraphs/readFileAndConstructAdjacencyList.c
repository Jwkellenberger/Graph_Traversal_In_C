#include "my.h"

void readFileAndConstructAdjacencyList(FILE* file, VERTEX vertArray[], int sizeOfArray){

   char readerPointer;
   char readerPointee;

   baseCaseArray(vertArray, sizeOfArray);

   while(fscanf(file, " %c %c", &readerPointer,&readerPointee) == 2){

     fillVertsAndEdges(vertArray, sizeOfArray, readerPointer, readerPointee);
   }

   displayAdjacencyList(vertArray, sizeOfArray);
}
