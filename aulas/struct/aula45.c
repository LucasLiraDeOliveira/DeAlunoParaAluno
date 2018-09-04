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

#define MAX 5



struct horario    // Definicao da struct horario
{
    int horas;    // O que contera' na struct, pode ser qualquer coisa
    int minutos;
    int segundos;
};

void receberHorarios(struct horario list[MAX]);
void printfHorarios(struct horario list[MAX]);

int main(void)
{   

    struct horario listaHorarios[MAX]; // Declaracao da struct agora, do tipo horario

    receberHorarios(listaHorarios);
    printfHorarios(listaHorarios);

    return EXIT_SUCCESS;
}



void receberHorarios(struct horario list[MAX])
{
    int i;

    for(i = 0; i < MAX; i++)
    {
        printf("Digite o %i horario(hh:mm:ss):\n", i+1);
        scanf("%i:%i:%i", &list[i].horas, &list[i].minutos, &list[i].segundos);
    }

    return EXIT_SUCCESS;
}

void printfHorarios(struct horario list[MAX])
{
    int i;

    for(i = 0; i < MAX; i++)
    {
        printf("O %i horario e' = %i:%i:%i\n", i, list[i].horas, list[i].minutos, list[i].segundos);
    }

    return 0;
}


