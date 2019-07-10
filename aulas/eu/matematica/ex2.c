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
#include <time.h>

#define MAX 20


int checaNum(int valor, int vetor[MAX], int range); //Checa se o numero ja foi sorteado

int main(void)
{
    int range; //tamanho do sorteio
    int num; // Variavel que recebe o valor aleatorio
    int valores[MAX];
    int i;
    int cond; //variavel para checar se o numero ja foi sorteado

    cond = 0;

    printf("Qual e' o range do sorteio?\n");
    scanf("%d", &range);

    srand((unsigned)time(NULL));

    for(i=0; i<MAX; i++)
        valores[i] = 0;

    for(i=0; i<range; i++)
    {
        cond = 0;
        while(cond == 0) //Condicao que checara' se o numero ja foi sorteado
        {
            num = 1 + (rand() % range);
            cond = checaNum(num, valores, range);
        }
        valores[i] = num;

        printf("O %d° numero sorteado foi: ", i+1);
        printf("%d\n", num);
    }

    return EXIT_SUCCESS;
}



int checaNum(int valor, int vetor[MAX], int range)
{
    int i;

    for(i=0; i<range; i++) // For para checar se o numero sorteado ja foi sorteado antes
    {
        if(vetor[i] == valor) // Se ja foi ele retornara' zero e sorteara' outro
            return 0;
    }

    return 1;

}

