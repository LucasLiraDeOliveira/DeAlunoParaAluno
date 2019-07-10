/***************************************************************************
 *   exN.c                                 Version 20160609.110111       *
 *                                                                         *
 *   Convert ER into AFD                                                   *
 *   Copyright (C) 2016         by Ruben Carlo Benante                     *
 ***************************************************************************
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation version 2 of the License.                *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************
 *   To contact the author, please write to:                               *
 *   Ruben Carlo Benante                                                   *
 *   Email: rcb@beco.cc                                                    *
 *   Webpage: http://www.beco.cc                                           *
 *   Phone: +55 (81) 3184-7555                                             *
 ***************************************************************************/
/* ---------------------------------------------------------------------- */
/**
 * @file exN.c
 * @ingroup GroupUnique
 * @brief diga algo curto (titulo)
 * @details diga algo detalhado 
 * @version 20160609.110101
 * @date 2016-06-09
 * @author Ruben Carlo Benante <<rcb@beco.cc>>
 * @par Webpage
 * <<a href="http://www.beco.cc">www.beco.cc</a>>
 * @copyright (c) 2016 GNU GPL v2
 * @note This program is free software: you can redistribute it
 * and/or modify it under the terms of the
 * GNU General Public License as published by
 * the Free Software Foundation version 2 of the License.
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * You should have received a copy of the GNU General Public License
 * along with this program.
 * If not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place - Suite 330, Boston, MA. 02111-1307, USA.
 * Or read it online at <<http://www.gnu.org/licenses/>>.
 *
 *
 * @todo Now that you have the template, hands on! Programme!
 * @warning Be carefull not to lose your mind in small things.
 * @bug This file right now does nothing usefull
 *
 */

/*
 * Instrucoes para compilar:
 *   $gcc exN.c -o exN.x -Wall
 *        -Wextra -ansi -pedantic-errors -g -O0 -DDEBUG=1
 * ou preferencialmente use o:
 *   $make
 */

/* ---------------------------------------------------------------------- */
/* includes */

#include <stdio.h> /* Standard I/O functions */
#include <stdlib.h> /* Miscellaneous functions (rand, malloc, srand)*/
#include <getopt.h> /* get options from system argc/argv */
#include <string.h> /* Strings functions definitions */
#include "ex14.h" /* library with definitions */

/* #include <time.h> */ /* Time and date functions */
/* #include <math.h> */ /* Mathematics functions */
/* #include <assert.h> */ /* Verify assumptions with assert */
/* #include <dlfcn.h> */ /* Dynamic library */
/* #include <malloc.h> */ /* Dynamic memory allocation */
/* #include <unistd.h> */ /* UNIX standard function */
/* #include <limits.h> */ /* Various C limits */
/* #include <ctype.h> */ /* Character functions */
/* #include <errno.h> */ /* Error number codes errno */
/* #include <signal.h> */ /* Signal processing */
/* #include <stdarg.h> */ /* Functions with variable arguments */
/* #include <pthread.h> */ /* Parallel programming with threads */
/* #include <fcntl.h> */ /* File control definitions */
/* #include <termios.h> */ /* Terminal I/O definitions POSIX */
/* #include <sys/stat.h> */ /* File status and information */
/* #include <float.h> */ /* Float constants to help portability */
/* #include <setjmp.h> */ /* Bypass standard function calls and return */
/* #include <stddef.h> */ /* Various types and MACROS */
/* #include <SWI-Prolog.h> */ /* Prolog integration with C */
/* #include <ncurses.h> */ /* Screen handling and optimisation functions */
/* #include <allegro.h> */ /* A game library for graphics, sounds, etc. */
/* #include <libintl.h> */ /* Internationalization / translation */
/* #include <locale.h> */ /* MACROS LC_ for location specific settings */
/* #include "libeco.h" */ /* I/O, Math, Sound, Color, Portable Linux/Windows */

/* ---------------------------------------------------------------------- */
/**
 * @ingroup GroupUnique
 * @brief This is the main event of the evening
 * @details Ladies and Gentleman... It's tiiiime!
 * Fightiiiiing at the blue corner,
 * he, who has compiled more C code than any other adversary in the history,
 * he, who has developed UNIX and Linux, and is an inspiration to maaany languages
 * and compilers, the GNU C Compiler, GCC!
 * Fightiiiiing at the red corner, the challenger, in his first fight, lacking of any
 * valid experience but angrily, blindly, and no doubtfully, will try to
 * compile this program without errors. He, the student, the apprentice,
 * the developer, beco!!
 *
 * @param[in] argc Argument counter
 * @param[in] argv Argument strings (argument values)
 *
 * @retval 0 If succeed (EXIT_SUCCESS).
 * @retval 1 Or another error code if failed.
 *
 * @par Example
 * @code
 *    $./exN -h
 * @endcode
 *
 * @warning   Be carefull with...
 * @bug There is a bug with...
 * @todo Need to do...
 * @note You can read more about it at <<a href="http://www.beco.cc">www.beco.cc</a>>
 * @author Ruben Carlo Benante
 * @version 20160609.110101
 * @date 2016-06-09
 *
 */
//int main(int argc, char *argv[])
//{
//  int opt; /* return from getopt() */

// IFDEBUG("Starting optarg loop...\n");

/* getopt() configured options:
 *        -h  help
 *        -c  copyrithg and version notes
 *        -v  verbose
 *        -f  given file name
 */
// opterr = 0;
// while((opt = getopt(argc, argv, "vhcf:")) != EOF)
//     switch(opt)
/*     {
       case 'h':
       help();
       break;
       case 'c':
       copyr();
       break;
       case 'v':
       verb++;
       break;
       case '?':
       break;
       case 'f':
       strcpy(sfile, optarg);
       break;
       default:
       printf("Type\n\t$man %s\nor\n\t$%s -h\nfor help.\n\n", argv[0], argv[0]);
       return EXIT_FAILURE;
       }

       if(verb)
       printf("Verbose level set at: %d\n", verb);
 * ...and we are done */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
struct estado{
    char nome[20];
    struct estado *proximo;

};
typedef struct estado state;

struct estado_final{
    char nome[20];
    struct estado_final *proximo;
};
typedef struct estado_final state_f;

struct delta{
    state *e_i;
    char simbol;
    state *e_f;
    struct delta* proximo;
};
typedef struct delta delta;
struct afn{
    state *q_state;
    state *inicial;
    char* alfabeto;
    state_f *final;
    delta* funcao;

};
typedef struct afn maquina; 
maquina* inicia_maquina(){
    maquina* m = (maquina*)malloc(sizeof(maquina));
    m->q_state = NULL;
    m->inicial =NULL;
    m->alfabeto = NULL;
    m->final = NULL;
    m->funcao = NULL;
    //printf("value mq %d",m);
    return m;

}

add_d(delta* a,delta *b,maquina* r)
{
    printf("lere");
    if(a->proximo == NULL){
        delta* tr_e = (delta*)malloc(sizeof(delta));
        tr_e->e_i = a->e_f;
        tr_e->e_f = r->inicial;
        tr_e->simbol = 'E';
        tr_e->proximo = b;
        a->proximo = tr_e;
    }
    else{
        add_d(a->proximo,b,r);
    }


}
add_states(state** mq,state *a)
{
    if(*mq == NULL)
    {
        *mq = a;
    }
    else{
        add_states(&(*mq)->proximo,a);
    }
}

maquina_simples(maquina* retorno ,char elemento,int base){

    retorno->q_state = NULL;
    retorno->funcao = (delta*)malloc(sizeof(delta));
    state* q1 =(state*)malloc(sizeof(state));
    state *q2 =(state*)malloc(sizeof(state));
    q1->proximo = NULL;
    q2->proximo = NULL;
    sprintf(q1->nome,"%d",base);
    sprintf(q2->nome,"%d",base+1);
    char ade[20];
    ade[0]='q';
    ade[1] = '\0';
    strcat(ade,q1->nome);
    strcpy(q1->nome,ade);
    ade[0]='q';
    ade[1] = '\0';
    strcat(ade,q2->nome);
    strcpy(q2->nome,ade);
    add_states(&retorno->q_state,q1);
    add_states(&retorno->q_state,q2);
    retorno->funcao->e_i = q1;
    retorno->funcao->e_f = q2;
    state_f *q22 =(state_f*)malloc(sizeof(state));
    q22->proximo = NULL;
    sprintf(q22->nome,"%d",base+1);
    ade[0]='q';
    ade[1] = '\0';
    strcat(ade,q22->nome);
    strcpy(q22->nome,ade);
    retorno->funcao->simbol = elemento;
    retorno->funcao->proximo =NULL;
    retorno->inicial = q1;
    retorno -> final = q22;
}


void uniao(maquina* a,maquina*b,int numero){
    state* inicial = (state*)malloc(sizeof(state));
    inicial->proximo = NULL;
    sprintf(inicial->nome,"%d",numero);
    char ade[20];
    ade[0]='q';
    ade[1] = '\0';
    strcat(ade,inicial->nome);
    strcpy(inicial->nome,ade);
    delta* func1 = (delta*)malloc(sizeof(delta));
    delta* func2 = (delta*)malloc(sizeof(delta));
    func1->e_i = inicial;
    func2->e_i = inicial;
    func1->simbol = 'E';
    func2->simbol = 'E';
    func1->e_f = a->inicial;
    func2->e_f = b->inicial;
    func2->proximo =NULL;
    a->inicial = inicial;
    func1->proximo = func2;
    adde(b->funcao,func1);
    adde(a->funcao,b->funcao);
    state *aux = b->q_state;

    while(aux->proximo !=NULL)
        aux = aux->proximo;
    aux->proximo = inicial;
    aux= a->q_state;
    while(aux->proximo !=NULL)
        aux = aux->proximo;
    aux->proximo = b->q_state;
    state_f *auxx = a->final;
    while(auxx->proximo !=NULL)
        auxx = auxx->proximo;
    auxx->proximo = b->final;
}
int maior(maquina* mq){
    state* aux = mq->q_state->proximo;
    printf("ok");
    char * p = mq->q_state->nome;
    p = p+1;
    int maior;
    maior = atoi(p);
    while(aux!= NULL){
        char *ponter = aux->nome;
        ponter = ponter +1;
        char r[30];
        int a = 1;
        strcpy(r,ponter);
        if(atoi(r)>maior)
            maior = atoi(r);
        aux = aux->proximo;
    }

    return maior;
}
//vitor
maquina* criarsub_mq(char* pointer,int numero){
    maquina** machines = (maquina**)malloc(sizeof(maquina));
    int maque= 0;
    char expressoes[400];
    int p =0;
    for(p=0;p<400;p++)
        expressoes[p] = '\0';
    int exp =0;
    while(1){
        if (pointer[0]=='\0')
            break;
        else if(pointer[0]>=97 && pointer[0]<=122){
            machines[maque] = inicia_maquina();
            maquina_simples(machines[maque],pointer[0],numero);
            maque++;
            numero+=2; 
        }
        else if(pointer[0] == '.'){

            expressoes[exp] = '.';
            exp++;
        }
        else if(pointer[0] == '|'){
            expressoes[exp]='|';
            exp++;
        }
        else if(pointer[0] == '*'){
            estrela(machines[maque-1],numero);
            numero+=1;
        }
        else if(pointer[0]== '('){

            machines[maque] = inicia_maquina();
            machines[maque] = criarsub_mq(pointer+1,numero);
            numero = maior(machines[maque]) +1;
            maque++;
            int n =1;
            while(n!=0){
                pointer = pointer +1;
                if(pointer[0]==')')
                    n--;
                else if(pointer[0]=='(')
                    n++;
            }

        }
        else if(pointer[0]==')')
            break;

        pointer = pointer +1;


    }
    int n;
    for(n=0;n<strlen(expressoes);n++){
        printf("\n expe %c",expressoes[n]);
    }
    for(n=0;n<maque;n++)
        printf("\n ei %s",machines[n]->inicial);

    n=0;
    maquina* retorno = machines[0]; 
    while(expressoes[n]!='\0'){
        if(expressoes[n]=='.'){
            printf("\n aplicou");
            concatena(retorno,retorno,machines[n+1]);
        }
        else{
            uniao(retorno,machines[n+1],numero);
            numero++;
        }
        n++;
    }

    return retorno;

}
/*
   maquina retorno;
   while(pointer[0]!=')')
   {
   if(pointer[0]=='(')
   {
   pointer++;
   retorno=concatena(retorno,criarsub_mq(pointer));
   }
   else
   {*/
void print_delta(delta*fr)
{
    printf("\n estado inicial tr %s",fr->e_i->nome);
    printf("\n simbol tr %c",fr->simbol);
    printf("\n estado final tr %s",fr->e_f);
}

removee(char* p)
{
    if(p[0]=='E')
    {
        int a;
        for(a=0;a<strlen(p)-1;a++)
            p[a]=p[a+1];
        p[strlen(p)-1]='\0';
    }
    else
    {
        removee(p+1);
    }
}


void concatena(maquina *retorno, maquina *a ,maquina *b)
{
    add_d(a->funcao,b->funcao,b);
    retorno->funcao = a->funcao;
    retorno->inicial=a->inicial;
    retorno->final=b->final;
    retorno->alfabeto=a->alfabeto;
    state *aux = a->q_state;
    while(aux->proximo != NULL)
    {
        aux=aux->proximo;
    }
    aux->proximo = b->q_state;
    aux = aux->proximo;
    while(aux->proximo != NULL)
    {
        aux = aux->proximo;
    }
    retorno->q_state=a->q_state;
}    
void adde(delta* a, delta* b)
{
    if(a->proximo = NULL)
    {
        a->proximo=b;
    }
    else
    {
        adde(a->proximo,b);
    }
}
int existe(state* p1, state_f*p2)
{
    //printf("\n existe");
    state_f *aux = p2;
    while(aux != NULL)
    {
        if(strcmp(aux->nome,p1->nome)==0)
            return 1;
        aux = aux->proximo;
    }
    return 0;
}
void estrela(maquina* mq,int numero){
    state* machine = mq->q_state;

    while(machine->proximo!=NULL){
        machine = machine->proximo;
    }
    state* estado_estrela = (state*)malloc(sizeof(state));
    sprintf(estado_estrela->nome,"%d",numero);
    char ade[20];
    ade[0]='q';
    ade[1] = '\0';
    estado_estrela->proximo = NULL;
    add_states(mq,estado_estrela);
    strcat(ade,estado_estrela->nome);
    strcpy(estado_estrela->nome,ade);
    estado_estrela->proximo = NULL;
    delta *iterador = mq->funcao;
    state *it = mq->q_state;
    while(it != NULL){
        if(existe(it,mq->final)==1){
            delta* loop = (delta*)malloc(sizeof(delta));
            loop->e_i = it;
            loop->e_f = mq->inicial;
            loop->simbol = 'E';
            loop->proximo = NULL;
            delta *r = mq->funcao;
            while(r->proximo!=NULL){
                r=r->proximo;
            }
            r->proximo = loop;
        }
        it = it->proximo;
    }



    delta *complemento = (delta*)malloc(sizeof(delta));
    complemento->e_i = estado_estrela;
    complemento->simbol = 'E';
    complemento->e_f = mq->inicial;
    complemento->proximo=NULL;
    iterador = mq->funcao;
    while(iterador->proximo !=NULL)
    {
        iterador=iterador->proximo;
    }
    iterador->proximo = complemento;

    state_f* ep = mq->final;
    while(ep->proximo !=NULL)
    {
        ep = ep->proximo;
    }
    state_f* e_estrela = (state_f*)malloc(sizeof(state_f));
    e_estrela->proximo=NULL;
    strcpy(e_estrela->nome,estado_estrela->nome);
    ep->proximo = e_estrela;
    mq->inicial = estado_estrela;
}
int main()
{
    char er[200];
    gets(er);
    removee(er);
    printf("\n %s",er);
    maquina* elemento = criarsub_mq(er,0);
    printf("\n estado inicial da machine %s",elemento->inicial->nome);
    state* aux= elemento->q_state;
    while(aux!=NULL)
    {
        printf("\n state machine %s",aux->nome);
        aux=aux->proximo;
    }
    delta* delt = elemento->funcao;
    while(delt != NULL)
    {
        print_delta(delt);
        delt=delt->proximo;
    }

    state_f* finais = elemento->final;
    while(finais!=NULL){
        printf("\n state finais Machine %s",finais->nome);
        finais = finais->proximo;
    }return EXIT_SUCCESS;
}

/* exN_init();  global initialization function: ainda a saber para que usar se precisar */




//    return EXIT_SUCCESS;
//}



/* ---------------------------------------------------------------------- */
/**
 * @ingroup GroupUnique
 * @brief Prints help information and exit
 * @details Prints help information (usually called by opt -h)
 * @return Void
 * @author Ruben Carlo Benante
 * @version 20160609.110101
 * @date 2016-06-09
 *
 */
void help(void)
{
    IFDEBUG("help()");
    printf("%s v.%s - %s\n", "exN", VERSION, "Convert AFD into Exp Reg");
    printf("\nUsage: %s [-h|-v|-c]\n", "exN");
    printf("\nOptions:\n");
    printf("\t-h,  --help\n\t\tShow this help.\n");
    printf("\t-c,  --copyright, --version\n\t\tShow version and copyright information.\n");
    printf("\t-v,  --verbose\n\t\tSet verbose level (cumulative).\n");
    /* add more options here */
    printf("\nExit status:\n\t0 if ok.\n\t1 some error occurred.\n");
    printf("\nTodo:\n\tLong options not implemented yet.\n");
    printf("\nAuthor:\n\tWritten by %s <%s>\n\n", "Ruben Carlo Benante", "rcb@beco.cc");
    exit(EXIT_FAILURE);
}

/* ---------------------------------------------------------------------- */
/**
 * @ingroup GroupUnique
 * @brief Prints version and copyright information and exit
 * @details Prints version and copyright information (usually called by opt -V)
 * @return Void
 * @author Ruben Carlo Benante
 * @version 20160609.110101
 * @date 2016-06-09
 *
 */
void copyr(void)
{
    IFDEBUG("copyr()");
    printf("%s - Version %s\n", "exN", VERSION);
    printf("\nCopyright (C) %d %s <%s>, GNU GPL version 2 <http://gnu.org/licenses/gpl.html>. This  is  free  software:  you are free to change and redistribute it. There is NO WARRANTY, to the extent permitted by law. USE IT AS IT IS. The author takes no responsability to any damage this software may inflige in your data.\n\n", 2016, "Ruben Carlo Benante", "rcb@beco.cc");
    if(verb>3) printf("copyr(): Verbose: %d\n", verb); /* -vvvv */
    exit(EXIT_FAILURE);
}

/* ---------------------------------------------------------------------- */
/**
 * @ingroup GroupUnique
 * @brief This function initializes some operations before start
 * @details Details to be written
 * @return Void
 * @todo Need to implement it. Its empty now.
 * @author Ruben Carlo Benante
 * @version 20160609.110101
 * @date 2016-06-09
 *
 */
void exN_init(void)
{
    IFDEBUG("exN_init()");
    /* initialization */
    return;
}

/* ---------------------------------------------------------------------- */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : C config for Vim modeline */
/* Template by Dr. Beco <rcb at beco dot cc> Version 20150619.231433      */

