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
    return;
  }
  if(pq->size==pq->capac){
    pq->capac=(pq->capac)*2+1;
    pq->heapArray=(heapElem*)realloc(pq->heapArray,sizeof(heapElem)*pq->capac);
    if(pq->heapArray==NULL){
      printf("Error al asignar memoria del monticulo");
      return;
    }
  }
  pq->heapArray[pq->size].data=data;
  pq->heapArray[pq->size].priority=priority;
  pq->size++;

  int indice = pq->size-1;
  while (indice > 0 && pq->heapArray[indice].priority > pq->heapArray[(indice-1)/2].priority) {
    heapElem temp = pq->heapArray[indice];
    pq->heapArray[indice] = pq->heapArray[(indice-1)/2];
    pq->heapArray[(indice-1)/2] = temp;
    indice = (indice-1) / 2;
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
