#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include "heap.h"

typedef struct nodo{
   void* data;
   int priority;
}heapElem;

typedef struct Heap{
  heapElem* heapArray;
  int size;
  int capac;
} Heap;


void* heap_top(Heap* pq){
  if(pq==NULL || pq->size ==0){
    printf("Error: El monticulo esta vacio\n");
    return NULL;
  }
  return pq->heapArray[0].data;
}



void heap_push(Heap* pq, void* data, int priority){
  if(pq==NULL){
    printf("Error: El monticulo no es valido\n");
    
  }
}


void heap_pop(Heap* pq){

}

Heap* createHeap(){
  Heap* monticulo = (Heap*)malloc(sizeof(Heap));
  if(monticulo == NULL){
    printf("Error al crear el monticulo\n");
    return NULL;
  }
  monticulo->size=0;
  monticulo->capac=3;
  monticulo->heapArray=(heapElem*)malloc(monticulo->capac*sizeof(heapElem));
  if(monticulo->heapArray==NULL){
    printf("Error al crear el monticulo\n");
    return NULL;
  }
  return monticulo;
}
