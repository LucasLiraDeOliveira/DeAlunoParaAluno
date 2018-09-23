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
#include <stdbool.h>

#define MAX 20
#define NUMERODEDEFINICOES 7

struct dicionario
{
    char palavra[20];
    char definicao[50];
};

bool compararStrings(const char palavra1[], const char palavra2[]);
int procurarStrings(const struct dicionario lingua[], const char procurar[], const int numDePalavras);

int main(void)
{
    char palavra[MAX] = {'\0'};
    int resultadoPesquisa; 

    const struct dicionario portugues[NUMERODEDEFINICOES] = {{"pao", "Comida de farinha"}, 
                                                             {"mortadela", "Comida de carne"}, 
                                                             {"feijao", "comida brasileira"}, 
                                                             {"tropeiro", "Tipo de feijao"}, 
                                                             {"queijo", "De minas"}, 
                                                             {"macarronada", "Tipico de vo'"}, 
                                                             {"pizza", "Tipico da Italia"}};

    printf("Digite a uma palavra: ");
    scanf("%s", palavra);

    resultadoPesquisa = procurarStrings(portugues, palavra, NUMERODEDEFINICOES);
    if(resultadoPesquisa  != -1 )
        printf("%s\n", portugues[resultadoPesquisa].definicao);
    else
        printf("Palavra nao encontrada\n");

    return EXIT_SUCCESS;
}

bool compararStrings(const char palavra1[], const char palavra2[])
{
    int i = 0;

    while(palavra1[i] == palavra2[i] && palavra1[i] != '\0' && palavra2[i] != '\0')
        i++;

    if(palavra1[i] == '\0' && palavra2[i] == '\0')
        return true;
    else
        return false;
}

int procurarStrings(const struct dicionario lingua[], const char procurar[], const int numDePalavras)
{
    int i = 0;

    while(i < numDePalavras) 
    {   
        if(compararStrings(procurar, lingua[i].palavra))
            return i;
        else
            i++;
    }

    return -1;
}



