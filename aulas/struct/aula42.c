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

struct horario    // Definicao da struct horario fora da main para que todos tenham acesso ao tipo da struct
{
    int horas;    // O que contera' na struct, pode ser qualquer coisa
    int minutos;
    int segundos;
};

struct horario teste(struct horario x);  // Declaracao de uma funcao do tipo struct que recebe uma struct e retorna outra struct, do mesmo tipo

int main(void)
{   

    struct horario agora; // Declaracao da struct agora, do tipo horario

    agora.horas = 15;     // Atribuicao de valores as partes da struct, ex.: agora.horas
    agora.minutos = 17;
    agora.segundos = 30;

    struct horario proxima;
    proxima = teste(agora);

    printf("%i : %i : %i", proxima.horas, proxima.minutos, proxima.segundos); // Printa a stutura (proxima) que recebe a mudanca de valores que vem da estrutura (agora)

    return 0;
}

struct horario teste(struct horario x)
{
    printf("%i: %i : %i\n", x.horas, x.minutos, x.segundos); // Printf para mostrar o valor de agora
    
    x.horas *= 10;
    x.minutos += 20;
    x.segundos -= 10;

    return x;
}
