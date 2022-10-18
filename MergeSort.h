#include <stdio.h>
#include <stdlib.h>


void intercala(int *v,int inicio, int fim, int meio,int tamanho){

    int poslivre, inicio_vetor1, inicio_vetor2, i;
    int aux[tamanho];
    inicio_vetor1 = inicio;
    inicio_vetor2 = meio+1;
    poslivre = inicio;

    while(inicio_vetor1 <= meio && inicio_vetor2 <= fim)
    {

        if(v[inicio_vetor1] <= v[inicio_vetor2])
        {

            aux[poslivre] = v[inicio_vetor1];
            inicio_vetor1 = inicio_vetor1 + 1;

        }
        else
        {
            aux[poslivre] = v[inicio_vetor2];
            inicio_vetor2 = inicio_vetor2 + 1;

        }
        poslivre = poslivre + 1;
    

    }
    
    // se ainda existem números no primeiro vetor que não foram intercalados
    for (i = inicio_vetor1; i <= meio; i++)
    {
        aux[poslivre] = v[i];
        poslivre = poslivre + 1;

    }

    // se ainda exitem números no segundo vetor que não foram intercalados
       for (i = inicio_vetor2; i <= fim; i++)
    {
        aux[poslivre] = v[i];
        poslivre = poslivre + 1;

    }

    //retorna os valores do vetor auxiliar para o vetor v
    for(i=inicio; i<=fim; i++)
    {
        v[i] = aux[i];
    }

    

}


void merge_sort(int *v, int inicio, int fim, int tamanho){

    int meio;
    
    if(inicio < fim)
    {
        meio = (inicio + fim) / 2;
        merge_sort(v, inicio, meio,tamanho);
        merge_sort(v,meio+1, fim, tamanho);
        intercala(v, inicio, fim, meio, tamanho);

    }
}





