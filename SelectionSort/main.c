#include <stdio.h>
#include <stdlib.h>

void SelectionSort(int val[],int tam){
    int x,y,min,aux=0;
    for(x=0;x<tam;x++){
        min=x;
        for(y=(x+1);y<tam;y++){
            if(val[y]<val[min])
                min=y;
        }
        if(val[x]!=val[min]){
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
