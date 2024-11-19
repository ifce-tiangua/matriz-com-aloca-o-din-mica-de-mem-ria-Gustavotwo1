#include <stdio.h>
#include <stdlib.h>

void mostraMatriz(int **matriz, int linhas, int colunas);

int main(){

    int **vet, linha, coluna;
    int i, j;

    scanf("%d",&linha);
    scanf("%d",&coluna);

    if(linha <= 0 || coluna <= 0){

        printf("[matriz vazia]\n");

        return 0;

    }

    //allocando a quantidade de linhas da matriz
    vet = (int**) malloc(linha*sizeof(int*));

    //aloocando a quantidade de coluna para cada linha de indice i
    for(i=0; i<linha; i++){

        vet[i] = (int*) malloc(coluna*sizeof(int));

    }

    for(i=0; i<linha; i++){

        for(j=0; j<coluna; j++){

            scanf("%d",&vet[i][j]);

        }

    }

    mostraMatriz(vet, linha, coluna);

    //desalocando matriz dinamica
    for(i=0; i<linha; i++){

        free(vet[i]);        

    }
    free(vet);

    return 0;
}

void mostraMatriz(int **matriz, int linhas, int colunas){

    int i, j;


    for(i=0; i<linhas; i++){
        
        printf("\n");

        for(j=0; j<colunas; j++){

            //dando espaço na matriz exceto no ultimo elemento da ultima linha e coluna                
            printf("%d", matriz[i][j]);
            if(j < colunas-1){

                printf(" ");

            }
                 
        }

    }  

}
