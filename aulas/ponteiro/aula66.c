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

void testeVariavel(int x);
void testePonteiro(int *pX);

int main(void)
{
    int teste = 1;
    int *pTeste = &teste;

    testeVariavel(teste); // quando passa a variavel teste, o programa cria uma copia da variavel teste e execulta as mudancas nessa copia e nao na real
    testePonteiro(pTeste); // nesse caso ele passa o endereco da variavel teste e manda somar 1 no ponteiro teste, ou ele manda somar 1 no valor no qual o ponteiro *pTestes aponta

    printf("%i\n", teste);

    return EXIT_SUCCESS;
}

void testeVariavel(int x)
{
    x++;
    printf("%i\n", x);
}

void testePonteiro(int *pX)
{
    ++*pX;
}

