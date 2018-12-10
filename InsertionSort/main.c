#include <stdio.h>
#include <stdlib.h>

void InsertionSort(int v[], int tam){
    int i,j,aux;
    for(i=1;i<=tam-1;i++){
        aux = v[i];
        j=i-1;
        while(j>=0 && v[j]>aux){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = aux;
    }
}

int main()
{
    int t[10] = {0};
    printf("Informe os 10 valores do array: ");
    for(int aux=0;aux<10;aux++){
        scanf("%d",&t[aux]);
        //preenchimento do array
    }
    InsertionSort(t,10);
    //chamada da função para organização do array
    printf("\n\n");

    for(int i=0;i<10;i++){
        printf("%d ",t[i]);
        //exibição de como ficou o array após ser ordenado.
    }

    return 0;
}
