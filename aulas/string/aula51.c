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

#define MAX 20

_Bool stringsIguais(char s1[], char s2[]);

int main(void)
{
    char string1[MAX], string2[MAX];

    printf("Digite a primeira string:\n");
    scanf("%s", string1);
    printf("Digite a primeira string:\n");
    scanf("%s", string2);

    if(stringsIguais(string1, string2))
        printf("As strings %s e %s sao iguais!\n", string1, string2);
    else
        printf("As strings %s e %s sao diferentes!\n", string1, string2);

    return EXIT_SUCCESS;
}

_Bool stringsIguais(char s1[], char s2[])
{
    int i = 0;

    while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        i++;
    
    if(s1[i] == '\0' && s2[i] == '\0')
        return 1;
    else
        return 0;
}

