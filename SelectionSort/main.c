#include <stdio.h>
#include <stdlib.h>

void SelectionSort(int val[],int tam){
    int x,y,min,aux=0;
    for(x=0;x<tam;x++){
        min=x; //supõem que o menor valor já está certo
        for(y=(x+1);y<tam;y++){
            if(val[y]<val[min])
                min=y; //se for menor que o valor suposto, guarda o novo menor valor.
        }
        if(val[x]!=val[min]){ //se o valor de saída do segundo "for" é menor que o inicial, trocam as posições.
            aux = val[x];
            val[x] = val[min];
            val[min] = aux;
        }
    }
}
int main()
{
    int v;
    int t[10] = {0};
    printf("Informe os 10 valores do array: ");
    for(int aux=0;aux<10;aux++){
        scanf("%d",&t[aux]);
    }
    SelectionSort(t,10);
    printf("\n\n");

    for(int i=0;i<10;i++){
        printf("%d ",t[i]);
    }

    return 0;
}
