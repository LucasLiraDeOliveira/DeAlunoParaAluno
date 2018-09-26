/* ************************************************************************ *
 *    PROGRAM_NAME, VERSION                                                 *
 *    BRIEF_DESCRIPTION                                                     *
 *                                                                          *
 *    Copyright (C) 2017 by Nome Completo                                   *
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
 *    Webpage: http://github.com/LucasLiraDeOliveira                        *
 *    Phone: +55 (71) 98335-3466                                            *
 * ************************************************************************ *
 * 
 */
#include <stdio.h>
#include <stdlib.h>

struct lista
{
    int valor;
    struct lista *prox;
};

struct lista *procurarValor(struct lista *pLista, int valor);

int main(void)
{
    struct lista m1, m2, m3;
    struct lista *resultado, *cabeca = &m1;
    int valor;

    m1.valor = 5;
    m2.valor = 10;
    m3.valor = 15;

    m1.prox = &m2;
    m2.prox = &m3;
    m3.prox = 0;

    printf("Digite o valor da pesquisa: \n");
    scanf("%i", &valor);

    resultado = procurarValor(cabeca, valor);

    if(resultado == (struct lista *)0)
        printf("Valor nao encontrado\n");
    else
        printf("Valor %i encontrado\n", resultado->valor);

    return EXIT_SUCCESS;
}

struct lista *procurarValor(struct lista *pLista, int valor)
{
    while(pLista != (struct lista *)0)
    {
        if(pLista->valor == valor)
            return (pLista);
        else
            pLista = pLista->prox;
    }
    return (struct lista *)0;
}

