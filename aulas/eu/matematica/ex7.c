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

int tamanhoString(char string[]);
void inverter(char *string, char *nString, int quantidade);

int main(void)
{
    char stringUsuario[20], nString[20];
    int num;

    printf("Digite uma palavra(string):\n");
    scanf("%s", stringUsuario); 

    num = tamanhoString(stringUsuario);
    inverter(stringUsuario, nString, num);

    printf("A inversa da string %s eh %s \n", stringUsuario, nString);

    return EXIT_SUCCESS;
}

int tamanhoString(char string[])
{
    int numCaracteres = 0;

    while(string[numCaracteres] != '\0')
    {
        numCaracteres ++;
    }
    return numCaracteres-1;
}

void inverter(char *string, char *nString, int quantidade)
{
    int i;

    string = string + quantidade;

    for(i=0; i<=quantidade; i++)
    {
        *nString = *string;
        --string;
        ++nString;
    }

    return 0;
}

