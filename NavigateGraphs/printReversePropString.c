#include "my.h"

void printReversePropString(char* array, int size){

   int i = 0;
   printf("   ");
   for(i; i<size; i++){
      if(array[i] != '\0'){
      printf("%c ", array[i]);
      }
   }
   printf("\n\n");
}
