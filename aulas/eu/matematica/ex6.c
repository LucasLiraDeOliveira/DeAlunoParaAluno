/* ************************************************************************ *
 *    PROGRAM_NAME, VERSION                                                 *
 *    BRIEF_DESCRIPTION                                                     *
 *                                                                          *
 *    Copyright (C) 2019 by Lucas Lira de Oliveira                          *
 *                                                                          *
 *    This program is free software; you can redistribute it and/or modify  *
 *    it under the terms of the GNU General Public License as published by  *
 *    the Free Software Foundation; either version 2 of the License, or     *
 *    (at your option) any later version.                                   *
 *                                                                          *
 *    This program is distributed in the hope that it will be useful,       *
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *    GNU General Public License for more details.                          *
 *                                                                          *
 *    You should have received a copy of the GNU General Public License     *
 *    along with this program; if not, write to the                         *
 *    Free Software Foundation, Inc.,                                       *
 *    59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 *                                                                          *
 *    To contact the author, please write to:                               *
 *    Nome Completo <lucas.oliveira845@gmail.com>                           *
 *    Webpage: http://www.example.com                                       *
 *    Phone: +55 (71) 98335-3466                                            *
 * ************************************************************************ *
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#include "librownie.h"


_Bool subPalavra(char palavra[], char subP[], int num1, int num2);

int main(void)
{
    int m, i;
    char palavra1[MAXstr], palavra2[MAXstr], novaPalavra[MAXstr];
    int num1, num2;
    _Bool resposta;

    printf("Que funcao voce deseja acessar:\n- Prefixo(1)\n- Sufixo(2)\n- Subpalavra(3)\n- Concatenar(4)\n");
    scanf("%d", &m);

    switch(m)
    {
        case 1:
            printf("Digite palavra:\n");
            scanf("%s", &palavra1);
            printf("Digite a palavra que voce deseja descobrir se e' um prefixo da palavra anterior\n");
            scanf("%s", &palavra2);
            num1 = tamanhoString(palavra1);
            num2 = tamanhoString(palavra2);
            resposta = prefixo(palavra1, palavra2, num1, num2);
            if(resposta)
                printf("%s e' o prefixo de %s\n", palavra2, palavra1);
            else
                printf("%s nao e' o prefixo de %s\n", palavra2, palavra1);
            break;

        case 2:
            printf("Digite palavra:\n");
            scanf("%s", &palavra1);
            printf("Digite a palavra que voce deseja descobrir se e' um sufixo da palavra anterior\n");
            scanf("%s", &palavra2);
            num1 = tamanhoString(palavra1);
            num2 = tamanhoString(palavra2);
            resposta = sufixo(palavra1, palavra2, num1, num2);
            if(resposta == 1)
                printf("%s e' o sufixo de %s\n", palavra2, palavra1);
            else
                printf("%s nao e' o sufixo de %s\n", palavra2, palavra1);
            break;

        case 3:
            printf("");
            printf("Digite palavra:\n");
            scanf("%s", &palavra1);
            printf("Digite a palavra que voce deseja descobrir se e' um sufixo da palavra anterior\n");
            scanf("%s", &palavra2);
            num1 = tamanhoString(palavra1);
            num2 = tamanhoString(palavra2);
            resposta = subPalavra(palavra1, palavra2, num1, num2);
            if(resposta == 1)
                printf("%s e' o sufixo de %s\n", palavra2, palavra1);
            else
                printf("%s nao e' o sufixo de %s\n", palavra2, palavra1);
            break;

        case 4:
            printf("Digite primeira palavra:\n");
            scanf("%s", &palavra1);
            num1 = tamanhoString(palavra1);
            printf("Digite segunda palavra:\n");
            scanf("%s", &palavra2);
            num2 = tamanhoString(palavra2);
            concatenarStrings(palavra1, num1, palavra2, num2, novaPalavra);
            printf("A concatenacao entre %s e %s e': ", palavra1, palavra2);
            for(i = 0; i < (num1 + num2 ); ++i)
                printf("%c", novaPalavra[i]);
            printf("\n");
            break;

        default:
            printf("");
            return 0;
    }

    return EXIT_SUCCESS;
}


_Bool subPalavra(char palavra[], char subP[], int num1, int num2)
{
    int i, j, k, aux, l, v;

    k = num1 - 2;
    j = num2 - 2;
    aux = 0;
    l = 0;

    printf("k -> %d\n", k);
    printf("j -> %d\n", j);

    for(i=0; i<num1; i++)
    {
        printf("i -> %d\n", i);
        if(palavra[i] != subP[l])
            v = 1;
        printf("aux -> %d\n", aux);
        if(palavra[i] == subP[l])
            v = 2;
        if(v == 1)
        {
            aux = 0; //zera a contagem da sub Palavra
            l = 0;
        }
        if(v == 2)
        {
            aux++;
            l++;
            if(aux == j) // mostra que achou a sub palavra
                return 1;
        }

    }

    return 0;
} 


