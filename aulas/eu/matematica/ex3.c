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

int atribuirAMatriz(int matriz[9][9]); // pegara os valores que estarao no arquivo txt para a matriz
int checaLinha(int matriz[9][9], int k, int l); // Funcao que checara' se o numero ha na linha
int checaColuna(int matriz[9][9], int k, int l); // Funcao que checara' se o numero ha na coluna
int checaQuadrado(int matriz[9][9], int k, int l); // Funcao que checara' se o numero ha no quadrado principal do espaço que esta' checando
int eliminacaoGrandeLinha(int matriz[9][9], int k, int l); // Funcao que checara' na estraegia de eliminacao por linha checando uma sequencia de tres grandes quadrados em linha
int eliminacaoGrandeColuna(int matriz[9][9], int k, int l); // Funcao que checara' na estraegia de eliminacao por linha checando uma sequencia de tres grandes quadrados em coluna


int main(void)
{
    int  i, j;
    int recebeu = 0; // variavel que conta quantos numeros sao adicionados ao tabuleiro
    int sudoku[9][9];

    recebeu += atribuirAMatriz(sudoku);

    for(i=0; i<9; i++)
    {
        for(j=0; j<9; j++)
        {
            recebeu += checaLinha(sudoku, i, j);
            recebeu += checaColuna(sudoku, i, j);
            recebeu += checaQuadrado(sudoku, i, j);
            recebeu += eliminacaoGrandeLinha(sudoku, i, j);
            recebeu += eliminacaoGrandeColuna(sudoku, i, j);

            if(recebeu == 81)
                return EXIT_SUCCESS;
        }
    }

    return EXIT_SUCCESS;
}


int atribuirAMatriz(int matriz[9][9]) 
{
    int retorno;

    return retorno;
}

int checaLinha(int matriz[9][9], int k, int l)
{
    int retorno;

    return retorno;
}
int checaColuna(int matriz[9][9], int k, int l)
{
    int retorno;

    return retorno;
}
int checaQuadrado(int matriz[9][9], int k, int l)
{
    int retorno;

    return retorno;
}
int eliminacaoGrandeLinha(int matriz[9][9], int k, int l) 
{
    int retorno;

    return retorno;
}
int eliminacaoGrandeColuna(int matriz[9][9], int k, int l) 
{
    int retorno;

    return retorno;
}


