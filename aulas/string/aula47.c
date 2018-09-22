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



#include <stdlib.h>
#include <stdio.h>

void concatenarStrings(char string1[], int t1, char string2[], int t2, char string3[]);

int main(void)
{
    int i;
    char palavra1[] = {'p', 'a', 'o', ' '};
    char palavra2[] = {'m', 'o', 'r', 't', 'a', 'd', 'e', 'l', 'a'};
    char novaPalavra[13];

    concatenarStrings(palavra1, 4, palavra2, 9, novaPalavra);

    for(i = 0; i < 13; ++i)
    {
        printf("%c", novaPalavra[i]);
    }
    printf("\n");

    return EXIT_SUCCESS;
}


void concatenarStrings(char string1[], int t1, char string2[], int t2, char string3[])
{
    int i, j;

    for(i = 0; i < t1; ++i)
        string3[i] = string1[i];
    for(j = 0; j < t2; ++j)
        string3[t1 + j] = string2[j];

    return EXIT_SUCCESS;
}


