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

int main(void)
{
    FILE *pFile;

    pFile = fopen("aula81.txt", "w"); // Primeira parte do fopen é o caminho pra chegar no arquivo, na segunda parte só pode por 3 letras: r(read - para ler o arquivo), w(write - para escrever no arquivo) e a(apend - alterar o arquivo). Ou somente poe o nome do arquivo a se ler

    fprintf(pFile, "Pao com mortadela"); // Para escrever no arquivo. Se mudar de frase, o programa iguinorara' o que tem escrito no arquivo e sobreescrevera' a frase nova!!
    fclose(pFile); // Para fechar o arquivo 

    return EXIT_SUCCESS;
}


