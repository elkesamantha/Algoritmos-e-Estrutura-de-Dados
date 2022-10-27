
#include <stdio.h>
#include <stdlib.h>

int maior(int *v, int tamanho){

    int maior = v[0];

    for (int i=1; i<tamanho; i++){

        if(maior < v[i]){
            maior = v[i];
        }
    }

return maior;
}



void CoutingSort(int *A, int *B, int *C, int n){

    int k;
    k= maior(A,n);
    int i;


        //Passo 1
        for(i=0;i<n;i++){
            C[A[i]-1]++;
            }

        //Passo 2
        for(i=1;i<k;i++){
            C[i] += C[i-1];
            }

        //Passo 3
        for(i=n-1;i>=0;i--) {
            B[C[A[i]-1]-1] = A[i];
            C[A[i]-1]--;
        }

        //Passo 4
        for(i=0;i<n;i++){
            A[i] = B[i];
            }


}