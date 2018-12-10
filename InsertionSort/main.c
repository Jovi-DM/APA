#include <stdio.h>
#include <stdlib.h>

void InsertionSort(int v[], int tam){
    int i,j,num;
    for(i=1;i<tam-1;i++){
        num = v[i];
        j=i-1;
        while(j>=0 && v[j]>num){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = num;
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
    InsertionSort(t,10);
    printf("\n\n");

    for(int i=0;i<10;i++){
        printf("%d ",t[i]);
    }

    return 0;
}
