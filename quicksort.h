#include <stdio.h>
#include <stdlib.h>


int partition (int *v, int inicio, int fim){
    int pivot = v[fim];
    int i = inicio;

    for (int j=inicio; j<fim; j++){

        if(v[j]<= pivot){
            int aux = v[j];
            v[j] = v[i];
            v[i] = aux;
            i = i + 1;
        }
    }

    int aux2 = v[i];
    v[i] = v[fim];
    v[fim] = aux2;

    return i;

}

void quicksort (int *v, int inicio, int fim){

    if(inicio < fim){
        int p = partition(v, inicio,fim);
        quicksort(v, inicio, p-1);
        quicksort(v, p+1, fim);  
    }

}