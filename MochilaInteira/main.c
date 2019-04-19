#include <stdio.h>
#include <stdlib.h>

int _ind[7] = {0};

int MochilaInteira(int PM, int p[],int v[], int t){

    // criando matriz
    int M[t+1][PM+1];
    // inserindo zero na linha 1|1
    for(int x=0; x<=PM; x++)
        M[0][x] = 0;
    for(int y=1; y<=t; y++)
        M[y][0] = 0;

    for(int y=1;y<=t;y++){
        for(int x=1;x<=PM;x++){
            //verificar se o elemento pode fazer parte da solução
            if(p[y-1] <= x){
                if((v[y-1] + M[y-1][x-p[y-1]]) > M[y-1][x]){
                    M[y][x] = v[y-1] + M[y-1][x-p[y-1]];
                }
                else
                    M[y][x] = M[y-1][x];
            }
            else
                M[y][x]= M[y-1][x];
        }
    }
    // retorna o valor máximo da mochila.
    return M[t][PM];
}

int main()
{
    int i=0;
    // PM = Peso máximo
    int PM;
    // t = total de itens
    int t;
    // v = vetor de valores dos itens
    int v[5000] = {0};
    // p = vetor peso dos itens
    int p[5000] = {0};

    FILE *arq_entrada;
    FILE *arq_saida;

    arq_entrada = fopen("mochila01.txt","r");
    arq_saida = fopen("mochilainteira.txt","w");

    if(arq_entrada == NULL){
        printf("O arquivo nao foi inicializado corretamente!\n");
        return -1;
    }else{
        printf("O arquivo foi aberto com sucesso!\n");
        fscanf(arq_entrada,"%d %d\n",&t,&PM);
        do{
           fscanf(arq_entrada,"%d %d\n",&p[i],&v[i]);
           i++;
        }while(!EOF);
    }


    int VM = MochilaInteira(PM,p,v,t);

    fprintf(arq_saida,"instância: mochila01.txt\n");
    fprintf(arq_saida,"valor: %d\n",VM);
    fprintf(arq_saida,"produtos escolhidos: ");

    fclose(arq_saida);
    fclose(arq_entrada);

    return 0;
}
