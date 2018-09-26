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

void exemplo1();
void exemplo2();
void exemplo3();

int main(void)
{
    exemplo1();
    exemplo2();

    return EXIT_SUCCESS;
}

void exemplo1()
{
    int x = 10;
    int *ponteiro;

    ponteiro = &x; // atribuindo ao valor de ponteiro o endereço de x

    printf("A variavel de ponteiro com o * aponta para o valor que esta' na memoria: %i\n", *ponteiro);
    printf("A variavel de ponteiro sem o * aponta para o endereco da memoria: %i\n\n", ponteiro);
    
    return 0;
}

void exemplo2()
{
    int x = 10;
    int y = x;

    x = 20;

    printf("Caso 1:\n");
    printf("%i %i\n\n", x, y);

    exemplo3();

    return 0;
}

void exemplo3()
{
    int x = 10;
    int *ponteiro;

    ponteiro = &x;

    int y = 20;

    *ponteiro = y; // O ponteiro que aponta para o endereço de memoria de x vai ter valor igual a y, logo x vai receber o valor de y

    printf("Caso 2:\n");
    printf("%i %i\n\n", x, y);

    return 0;
}

