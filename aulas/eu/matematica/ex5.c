/* ************************************************************************ *
 *    EX5, VERSION 1.0                                                      *
 *    Pragrama que faz a conversao entre dois ranges dados                  *
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
#include <math.h>
#include "librownie.h"


//float conversao(float r1i, float r1f, float r2i, float r2f, float primeiro);


int main(void)
{
    float x, num; // numeros que serao os da conversao
    char resposta;
    float pi, pf, si, sf; //letra p->primeiro, s->segundo, i->inicio e f->final  para as variaveis que pegarao os valores dos ranges

    printf("Digite o valor inicial da sua primeira escala: ");
    scanf("%f", &pi);
    printf("Digite o valor final da sua primeira escala: ");
    scanf("%f", &pf);
    printf("Digite o valor inicial da sua segunda escala: ");
    scanf("%f", &si);
    printf("Digite o valor final da sua segunda escala: ");
    scanf("%f", &sf);

    resposta = 'S';

    while(resposta == 's' || resposta == 'S')
    {
        resposta = 'n';
        printf("\nQual numero na primeira escala voce quer converter para a segunda?");
        scanf("%f", &x);

        while(x < pi || x > pf) // Laco para checar se o numero que o usuario entro esta' fora do range
        {
            printf("\nNumero fora da escala, digite um numero entre %.2f e %.2f: ", pi, pf);
            scanf("%f", &x);
        }

        num = conversao(pi, pf, si, sf, x); // chamando a funcao na librownie que converte os numeros

        printf("\nO numero %.2f na primeira escala vai tornar o numero %.2f na segunda escala.\n", x, num);

        printf("Deseja continuar sorteando numeros?(S/N) ");
        scanf("%s", &resposta);
    }


    return  EXIT_SUCCESS;
}

