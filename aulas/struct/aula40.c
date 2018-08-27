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

int main(void)
{   
    struct horario    // Definicao da struct horario
    {
        int horas;    // O que contera' na struct, pode ser qualquer coisa
        int minutos;
        int segundos;
        double teste;
        char letra;
    };

    struct horario agora; // Declaracao da struct agora, do tipo horario
    agora.horas = 15;     // Atribuicao de valores as partes da struct, ex.: agora.horas
    agora.minutos = 17;
    agora.segundos = 30;

    struct horario depois;
    depois.horas = agora.horas + 10;
    depois.minutos = agora.minutos;
    depois.segundos = 2*8;
    depois.teste = 50.55 / 123;
    depois.letra = 'a';

    printf("%i: %i : %i\n", agora.horas, agora.minutos, agora.segundos);

    printf("%i\n", depois.horas);
    printf("%i\n", depois.minutos);
    printf("%i\n", depois.segundos);
    printf("%f\n", depois.teste);
    printf("%c\n", depois.letra);

    return 0;
}
