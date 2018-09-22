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
    int i;

    struct horario    // Definicao da struct horario
    {
        int horas;    // O que contera' na struct, pode ser qualquer coisa
        int minutos;
        int segundos;
    };

    struct horario teste[2][2]; // Declaracao da struct do tipo vetor, teste, que contem 4 espacos onde tera' .horas, .minutos e .segundos



    //struct horario teste [3] = {{12, 13, 14}, {15, 16, 17}, {18, 19, 20}} ;  outro modo de declarar ja atribuindo, cada espaco do vetor tem todos os seus componentes da struct horaio

    // for(i=0; i<3; i++}
    //     printf("%i : %i : %i\n", teste[i].horas, teste[i].minutos, teste[i].segundos)   outra maneira de printar todos os valores
    


    teste[0][0].horas = 15;     // Atribuicao de valores as partes da struct, ex.: agora.horas
    teste[0][0].minutos = 17;
    teste[0][0].segundos = 30;

    printf("%i: %i : %i\n", teste[0][0].horas, teste[0][0].minutos, teste[0][0].segundos);

    return 0;
}
