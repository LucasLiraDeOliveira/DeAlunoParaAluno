#include "librownie.h"

//corpo de funcoe




float conversao(float r1i, float r1f, float r2i, float r2f, float primeiro)
{
    float saida;

    saida = (((primeiro - r1i)/(r1f - r1i))*(r2f - r2i)) + r2i;
    
    return saida;
}


int tamanhoString(char string[])
{
    int numCaracteres = 0;

    while(string[numCaracteres] != '\0')
        numCaracteres ++;

    return numCaracteres+1;
}


_Bool prefixo(char palavra[], char subP[], int num1, int num2)
{
    int i = 0;

    while(palavra[i] == subP[i] && palavra[i] != '\0' && subP[i] != '\0')
        i++;

    if(subP[i] == '\0')
        return 1;
    else
        return 0;
} 


_Bool sufixo(char palavra[], char subP[], int num1, int num2)
{
    int i, j;

    i = num1 - 2;
    j = num2 - 2;

    while(palavra[i] == subP[j])
    {
        i--;
        j--;
    }

    if(subP[j+1] == subP[0])
        return 1;
    else
        return 0;
} 


void concatenarStrings(char string1[], int tamanho1, char string2[], int tamanho2, char string3[])
{
    int i, j;

    for(i = 0; i < tamanho1; ++i)
        string3[i] = string1[i];
    for(j = 0; j < tamanho2; ++j)
        string3[tamanho1 + j] = string2[j];
    return ;
}

int tamanhoString(char string[]) // funcao que conta o tamanho de uma string
{
    int numCaracteres = 0;

    while(string[numCaracteres] != '\0')
    {
        numCaracteres ++;
    }
    return numCaracteres-1;
}

void inverter(char *string, char *nString, int quantidade) // funcao que inverte uma string
{
    int i;

    string = string + quantidade;

    for(i=0; i<=quantidade; i++)
    {
        *nString = *string;
        --string;
        ++nString;
    }

    return 0;
}

