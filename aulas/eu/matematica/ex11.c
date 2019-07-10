/* *nstaf(pl->c==x) *pl=cabecaet c;**le(pl!=NULL)*tnu*ct st_lis*ta *prox;******************************************************************* *

 *
 *    EX11, VERSION 1.0                                                     *
 *    Codigoo do arquivo PDF sobre listas                                   *
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
 *    Nome Completo <lucas.oliveira845@gmail.comnclude<stdio.h>truct st_list
 *    Webpage: http://www.example.com                                       *
 *    Phone: +55 (71) 98335-3466                                            *
 * ************************************************************************ *
 * 
 */


#include<stdlib.h>
#include<stdio.h>

typedef struct st_list
{
    int c;
    struct st_lista *prox;
}lista;

lista *buscar(lista *cabeca, int x)
{
    lista *pl=cabeca;
    while(pl!=NULL)
    {
        if(pl->c==x)
            return pl;
        pl=pl->prox;
    }

    return NULL;
}

void inserir(lista **cabeca, int x)
{
    lista *pl=*cabeca;
    lista *plant=NULL;
    while(pl!=NULL)
    {
        plant=pl;
        pl=pl->prox;
    }
    pl=malloc(sizeof(lista));
    pl->c=x;
    pl->prox=NULL;
    if(plant!=NULL)
        plant->prox=pl;
    else
        *cabeca=pl;
}

void remover(lista **cabeca, lista *r)
{
    lista *pl=*cabeca;
    lista *plant=NULL;
    if(r==NULL)
        return;
    while(pl!=NULL && pl!=r)
    {
        plant=pl;
        pl=pl->prox;
    }
    if(pl==NULL)
        return;
    if(plant!=NULL)
        plant->prox=pl->prox;
    else
        *cabeca=pl->prox;
    free(pl);

    return;
}

lista *anterior(lista *cabeca, lista *r)
{
    lista *pl=cabeca, *plant=NULL;
    if(r==NULL)
        return NULL;
    while(pl!=NULL && pl!=r)
    {
        plant=pl;
        pl=pl->prox;
    }
    return plant;
}

void imprimir(lista *cabeca)
{
    lista *pl=cabeca;
    while(pl!=NULL)
    {
        printf("%d->",pl->c);
        pl=pl->prox;
    }
    printf("NULL\n");
}

int main(void)
{
    lista *l1=NULL, *b=NULL, *a=NULL;

    inserir(&l1, 1);
    imprimir(l1);
    b=buscar(l1, 4);
    if(b!=NULL)
        printf("b->c: %d\n", b->c);
    a=anterior(l1, b);
    if(a!=NULL)
        printf("a->c: %d\n", a->c);
    b=buscar(l1, 1);
    remover(&l1, b);
}


