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
    return NULL;
}



void heap_push(Heap* pq, void* data, int priority){

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
  monticulo->heapArray=(int*)malloc(sizeof(int));
  return monticulo;
}
