#include "my.h"

VERTEX* pointerInArray(VERTEX vertArray[], int arraySize, char a){

   VERTEX vert;
   int i = 0;
   bool vertInArray = false;

   for(i; !vertInArray && i< arraySize && '-' != vertArray[i].id; i++){

      if(vertArray[i].id == a){
          vert = vertArray[i];
          vertInArray = true;
          i--;
      }
   }

   if(!vertInArray){

      vertArray[i].id = a;
   }
   //printf("%c",a);
   return (&vertArray[i]);
}
