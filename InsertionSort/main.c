#include <stdio.h>
#include <stdlib.h>

void InsertionSort(int v[], int tam){
    int i,j,aux;
    for(i=1;i<=tam-1;i++){
        aux = v[i]; //segundo elemento da lista � escolhido;
        j=i-1; //uma posi��o atras ao elemento escolhido;
        while(j>=0 && v[j]>aux){ //compara��o do n�mero pivo com os anteriores;
            v[j+1] = v[j]; //comparando;
            j--; //volta uma posi��o;
        }
        v[j+1] = aux; //setando o novo valor para a posi��o 0, se for menor que o valor escolhido.
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
    //chamada da fun��o para organiza��o do array
    printf("\n\n");

    for(int i=0;i<10;i++){
        printf("%d ",t[i]);
        //exibi��o de como ficou o array ap�s ser ordenado.
    }

    return 0;
}
