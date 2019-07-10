/* ************************************************************************ *
 *    EX10, version 1.0                                                     *
 *   Programa que simula a calculadora polonesa                             *
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
#include <string.h>

typedef struct st_pilha
{
    float num;
    struct st_pilha *prox;
} pilha;


int main(void)
{
    char sair;
    do
    {
        inicio();
        printf("\nDeseja continuar? y/n\n");
        scanf("%s", &sair);
    }while(sair!='n');
    return 0;
}


void inserir(pilha **cabeca, float c)
{
    pilha *op;
    op=malloc(sizeof(pilha));
    op->num=c;
    op->prox=NULL;
    if(cabeca == NULL)
    {
        op->prox=NULL;
        *cabeca=op;
    }
    else
    {        
        op->prox=*cabeca;
        *cabeca=op;
    }
    return;
}

void mostrar(pilha *cabeca)
{
    pilha *ms=cabeca;

    printf("\nResultado da operacao: ");
    while(ms!=NULL)
    {
        printf("%.2f\n", ms->num);
        ms=ms->prox;
    }

    return;
}

float retirar(pilha **cabeca)
{ 
    float valor=0;
    pilha *primeiro=*cabeca;

    *cabeca=primeiro->prox;
    valor=primeiro->num;
    free(primeiro);
    return valor;
} 

int n_elementos(pilha *cabeca)
{
    pilha *op=cabeca;
    int count=0;
    while(op!=NULL)
    {
        count++;
        op=op->prox;
    }
    return count;
}

void inicio(void)
{
    float res=0, x=0, y=0;
    pilha *cabeca=NULL;
    int cont_p=0;
    char exp[20];
    printf("\n\t\t\t\tCalculadora Polonesa Reversa\n");
    printf("Digite os numeros e logo em seguida coloque operador\n");
    printf("\nSoma -> +\nSubtracao -> -\nMultiplicacao -> *\nDivisao -> /\nResultado Final -> =\n\n");
    do
    {
        scanf("%s", &exp);
        if(!strcmp(exp, "+"))
        {
            x=retirar(&cabeca);
            y=retirar(&cabeca);
            res=x+y;
            inserir(&cabeca, res);
        }
        else if(!strcmp(exp, "-"))
        {
            x=retirar(&cabeca);
            y=retirar(&cabeca);
            res=y-x;
            inserir(&cabeca, res);
        }
        else if(!strcmp(exp, "*"))
        {
            x=retirar(&cabeca);
            y=retirar(&cabeca);
            res=x*y;
            inserir(&cabeca, res);  
        }
        else if(!strcmp(exp, "/"))
        {
            x=retirar(&cabeca);
            y=retirar(&cabeca);
            res=y/x;
            inserir(&cabeca, res);  
        }
        else if(!strcmp(exp, "="))
        {

            if(cabeca!=NULL)
            {
                mostrar(cabeca);
            }

        }
        else
            inserir(&cabeca, atof(exp)); //atoi -> string para inteiro, atof -> string para float
    }while(strcmp(exp, "="));

}


