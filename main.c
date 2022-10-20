#include <stdio.h>
#include <stdlib.h>
#include "MergeSort.h"
#include "quicksort.h"


int main(){

int *v;

v = calloc(20,sizeof(int));

  for (int i = 0; i < 20; i++)
  {
    /* gerando valores aleatórios entre zero e 50*/
    v[i] = rand() % 50;
    printf("%d ", v[i]);
  }

printf("%d\n");

quicksort(v,0,19);

int i;

for (i=0; i < 20; i++){
    printf("%d ",v[i]);
}


    return 0;
}