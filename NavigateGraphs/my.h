#ifndef MY_H
#define MY_H

   #include <stdbool.h>
   #include <stdlib.h>
   #include <stdio.h>

   struct EDGETAG;

   typedef struct{
      char id;
      bool isVisited;
      struct EDGETAG* edges;
   }VERTEX;

   typedef struct EDGETAG{
      VERTEX* vertex;
      struct EDGETAG* edges;
   }EDGE;


   typedef struct{
      int top;
      unsigned int maxCapacity;
      VERTEX** array;
   }dataCollection;


   void baseCaseArray(VERTEX[],int);
   void createEdgeBetweenVerts(VERTEX*, VERTEX*);
   void fillVertsAndEdges(VERTEX[],int,char,char);
   void displayAdjacencyList(VERTEX[], int);

   VERTEX* pointerInArray(VERTEX[],int,char);


   dataCollection* constructDataCollection();
   bool isEmpty(dataCollection*);
   void push(dataCollection*, VERTEX*);
   VERTEX* pop(dataCollection*);
   VERTEX* peek(dataCollection*);

   void resetIsVisited(VERTEX*, int);
   void depthFirstSearch(VERTEX*, int);

   void insert(dataCollection*, VERTEX*);
   VERTEX* removeFirst(dataCollection*);
   void breadthFirstSearch(VERTEX*, int);

   void reversePropString(char*, int*, char);
   void printReversePropString(char*, int);
   void topologicalSearch(VERTEX*, int);

   void readFileAndConstructAdjacencyList(FILE*, VERTEX[], int);

#endif
