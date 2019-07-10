#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 5

void preencheAleatorio(int matrix1[N][N]);
void imprimeMatriz(int matrix2[N][N]);

int main(void)
{
    int i,j,z,aux;
    int matriz1[N][N], matriz2[N][N];
    int matrizFinal[N][N];

    srand((unsigned) time(NULL));

    aux = 0;
    
    preencheAleatorio(matriz1); /* Para sortear as matrizes com numeros aleatorios*/
    preencheAleatorio(matriz2);

    printf("\nMatriz 1:\n"); 
    imprimeMatriz(matriz1); /* Chaamdas para imprimir as matrizes 1 e 2 */

    printf("\nMatriz 2:\n");
    imprimeMatriz(matriz2);

    printf("\nMultiplicacao das das matrizes: \n"); 
    for(i=0;i<N;i++) /* Laco para multiplicar as duas matrizes */
    {
        for(z=0; z<N; z++) /* Esse laco serve para passar as colunas na segunda matriz e efetuar corretamente a multiplicacao*/
        {
            for(j=0;j<N;j++)
            {
                aux += matriz1[i][j]*matriz2[j][z];
            }
            matrizFinal[i][z] = aux;
            aux = 0;
        }
    }
    
    imprimeMatriz(matrizFinal);

    return EXIT_SUCCESS;
}

void preencheAleatorio(int matrix1[N][N])
{
    int k, l;

    for(k=0; k<N ; k++)
    {
        for(l=0; l<N ;l++)
        {
            matrix1[k][l] = (rand() % 10);
        }
    }

    return ;
}
void imprimeMatriz(int matrix2[N][N])
{
    int k, l;

    for (k=0; k<N; k++)
    {
        for(l=0; l<N; l++)
        {
            printf("%d ", matrix2[k][l]);
            if(l == N-1)
                printf("\n");
        }
    }

    return ;
}

