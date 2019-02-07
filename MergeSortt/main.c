#include <stdio.h>
void intercalar(int v[], int aux[], int inil,int ini2, int fim2){
    int inl=inil, in2=ini2, fiml=in2-1, au=0, i;
    while(inl<=fiml && in2<=fim2){
        if (v[inl]<v[in2]){
            aux[au++] = v[inl++];
        }else{
            aux[au++] = v[in2++];
        }
    }
    while(inl<=fiml){
        aux[au++] = v[inl++];
    }
    while(in2<=fim2){
        aux[au++] = v[in2++];
    }
    for(i=0;i<au;i++){
        v[i+inil] = aux[i];
    }
}
void mergeSort (int v[], int aux[], int left, int right){
    int meio;
    if(left<right){
        meio = (left+right)/2;
        mergeSort(v,aux,left,meio);
        mergeSort(v,aux,meio+1,right);
        intercalar(v,aux,left,meio+1,right);
    }
}
int main(){
    int v[10], aux[10], i;
    printf("Insira os 10 valores: ");
    for(i=0;i<10;i++){
        scanf("%d", &v[i]);
    }
    mergeSort(v,aux,0,9);
    for(i=0;i<10;i++){
        printf("%d ",v[i]);
    }
    return 0;
}
