#include <stdio.h>
#include <stdlib.h>

void quicksort(int *v, int ini, int fim){
    int i, j,aux, y;
    i = ini, j = fim;
    aux = v[(ini + fim)/2];

    while(i<=j){
        while(v[i]<aux&&i<fim){
            i++;
        }
        while(v[j]>aux&&j>ini){
            j--;
        }
        if(i<=j){ //colocar o vetor todo em ordem.
            y=v[i];
            v[i] = v[j];
            v[j] = y;
            i++;
            j--;
        }
    }
    if(j>ini){
        quicksort(v,ini,j);
    }
    if(i<fim){
        quicksort(v,i,fim);
    }
}

int main(){
    int i, vet[10];
    printf("Insira um valor: ");
    for(i=0;i<10;i++){
        scanf("%d", &vet[i]);
    }
    quicksort(vet,0,9);
    printf("Ordenacao completa!\n");
    for(i=0;i<10;i++)
        printf("%d ",vet[i]);

    return 0;
}
