#include "my.h"

void reversePropString(char* array, int* size, char entry){

   array[--(*size)] = entry;
}
