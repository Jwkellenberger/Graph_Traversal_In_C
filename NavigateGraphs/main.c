#include "my.h"

void main(int argc, char* argv[]){

   int sizeOfArray = 26;
   VERTEX vertArray[sizeOfArray];

   FILE *file;
   file = fopen(argv[1], "r");

   readFileAndConstructAdjacencyList(file, vertArray, sizeOfArray);

   depthFirstSearch(vertArray, sizeOfArray);

   breadthFirstSearch(vertArray, sizeOfArray);

   topologicalSearch(vertArray, sizeOfArray);

}