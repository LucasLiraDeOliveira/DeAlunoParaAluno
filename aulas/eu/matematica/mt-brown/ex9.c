/*****************************************************************************
 *   exN.c                                    Version 20180714.101818        *
 *                                                                           *
 *   Brief description                                                       *
 *   Copyright (C) 2016-2018    by Ruben Carlo Benante                       *
 *****************************************************************************
 *   This program is free software; you can redistribute it and/or modify    *
 *   it under the terms of the GNU General Public License as published by    *
 *   the Free Software Foundation; either version 2 of the License.          *
 *                                                                           *
 *   This program is distributed in the hope that it will be useful,         *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of          *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the           *
 *   GNU General Public License for more details.                            *
 *                                                                           *
 *   You should have received a copy of the GNU General Public License       *
 *   along with this program; if not, write to the                           *
 *   Free Software Foundation, Inc.,                                         *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.               *
 *****************************************************************************
 *   To contact the author, please write to:                                 *
 *   Ruben Carlo Benante                                                     *
 *   Email: rcb@beco.cc                                                      *
 *   Webpage: www.beco.cc                                                    *
 *   Phone: +55 (81) 3184-7555                                               *
 *****************************************************************************/

/* ------------------------------------------------------------------------- */
/**
 * @file exN.c
 * @ingroup GroupUnique
 * @brief Brief description
 * @details This program really do a nice job as a template, and template only!
 * @version 20160908.182830
 * @date 2016-09-08
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
 *        -Wextra -ansi -pedantic-errors -g -O0 -DDEBUG=1 -DVERSION="0.1.160612.142044"
 *   ou preferencialmente inclua um makefile e use:
 *   $make
 *
 * Modelo de indentacao:
 * Estilo: --style=allman ou -A1
 *
 * Opcoes: -A1 -s4 -k3 -xj -SCNeUpv
 *
 *  * No vi use:
 *      :% !astyle -A1 -s4 -k3 -xj -SCNeUpv
 *  * No linux:
 *      $astlye -A1 -s4 -k3 -xj -SCNeUpv exN.c
 */

/* ------------------------------------------------------------------------- */
/* includes */

/*#include <stdio.h>*/ /* Standard I/O functions */
/*#include <stdlib.h>*/ /* Miscellaneous functions (rand, malloc, srand)*/
/*#include <getopt.h>*/ /* get options from system argc/argv */
#include "ex9.h" /* To be created for this template if needed */

/* #include <time.h> */ /* Time and date functions */
/* #include <math.h> */ /* Mathematics functions */
/* #include <string.h> */ /* Strings functions definitions */
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

/* ------------------------------------------------------------------------- */
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
 * @version 20160908.182830
 * @date 2016-09-08
 *
 */
int main(int argc, char *argv[])
{
    int opt; /* return from getopt() */

    IFDEBUG("Starting optarg loop...");

    /* getopt() configured options:
     *        -h  help
     *        -V  version
     *        -v  verbose
     */
    opterr = 0;
    while((opt = getopt(argc, argv, "vhV")) != EOF)
        switch(opt)
        {
            case 'h':
                help();
                break;
            case 'V':
                copyr();
                break;
            case 'v':
                verb++;
                break;
            case '?':
            default:
                printf("Type\n\t$man %s\nor\n\t$%s -h\nfor help.\n\n", argv[0], argv[0]);
                return EXIT_FAILURE;
        }

    if(verb)
        printf("Verbose level set at: %d\n", verb);

    exN_init(); /* initialization function */

    /* ...and we are done */
    /* Write your code here... */

    void imprimetudo(auto_t *p);
    short int conjEstados(void);
    char alfabeto(void);
    short int estadoInicial(void);
    void insEstadosFinais(fstate_t **headf, int f);
    void insFuncaoTransicao(delta_t **headd, int ins,int a,int fis);

    auto_t *p = NULL;/* O automato*/
    char fstates[SBUFF]; /* Conjunto de estados finais em string*/
    char faux;
    char delta[SBUFF];
    char daux;
    char a; /*Alfabeto para funcao de transicao*/
    int i = 0;
    short int nfstate; /*Estado final em inteiro após conversao  da string*/
    short int ndel1; /*Estado antes de receber alfabeto em inteiro */
    short int ndel2; /* Estado apos receber alfabeto inteiro */

    printf("***************\nMaquina de Turing\n*************\n");

    p = malloc(sizeof(auto_t));

    p->k = conjEstados();
    //p.k = conjEstados();
    p->a = alfabeto();

    p->s = estadoInicial();

    printf("Digite quais sao os estados finais do automato (separados por espaco):\n");
    fgets(fstates, SBUFF,stdin);
    while(fstates[i] != '\n')
    {
        if(fstates[i] != ' ')
        {
            faux = fstates [i];
            nfstate = faux - '0';
            insEstadosFinais(&p->headf,nfstate);
        } 

        i++;
    }    
   
    i = 0;
    printf("Digite as funcoes de transicao no formato '0a1' (estado->alfabeto->estado), sendo cada uma separada por espaco:\n");
    fgets(delta, SBUFF, stdin);
    while(delta[i] != '\n')
     {
        if(delta[i] != ' ')
         {
            daux = delta [i];
            ndel1 = daux - '0';
            i++;
            a = delta [i];
            i++;
            daux = delta[i];
            ndel2 = daux- '0';
            insFuncaoTransicao(&p->headd, ndel1, a, ndel2);
        } 
        i++;
    } 
    imprimetudo(p);

    free(p);
 
    return EXIT_SUCCESS;
}
short int conjEstados(void)
{
    char qtdc[SBUFF]; /*Quantidade em caracteres*/
    short int qtds;/*Quantidade em inteiros*/
    printf("Por favor, digite a quantidade de estados:\n");
    fgets(qtdc, SBUFF, stdin);
    qtds = atoi(qtdc);


    return qtds;
}   

char alfabeto(void)
{
    char alfa[SBUFF];/*Alfabeto*/
    printf("Por favor, digite o alfabeto aceito, em letras minusculas (por exemplo, ao digitar 'c', aceita a,b e c):\n");
    fgets(alfa, SBUFF,stdin);

    return alfa [0];
}   

short int estadoInicial(void)
{
    char qtdc[SBUFF];
    short int qtds;
    printf("Por favor digite qual o estado inicial:\n");
    fgets(qtdc,SBUFF,stdin);
    qtds=atoi(qtdc);
    return qtdc;
}

void insEstadosFinais(fstate_t **headf,int f)
{
    fstate_t *pl = *headf;
    fstate_t *plant = NULL;

    while(pl!=NULL)
    {
        plant = pl;
        pl = pl ->proxf;
    }

    pl = malloc(sizeof(fstate_t));
    pl->f = f;
    pl->proxf = NULL;

    if(plant != NULL)
        plant->proxf = pl;
    else
        *headf = pl;

    return;
}

void insFuncaoTransicao(delta_t **headd,int ins,int a,int fis)
{
    delta_t *pl = *headd;
    delta_t *plant =NULL;

    while(pl != NULL)
    {
        plant = pl;
        pl = pl->proxd;
    }

    pl = malloc(sizeof(delta_t));
    pl->ins = ins;
    pl->a = a;
    pl->fis = fis;
    pl->proxd = NULL;

    if(plant != NULL)
        plant->proxd=pl;
    else
        *headd=pl;
    return;
}

void imprimetudo( auto_t *p)
{
    fstate_t *pf = p->headf;
    delta_t *pd = p->headd;
    printf("A quantidade de estados eh: %d\n",p->k);

    printf("O alfabeto aceito eh:");
    switch(p->a)
    {
        case 'a':
            printf("%c\n",p->a);
            break;
        case 'b' :
            printf("'a' e '%c' \n",p->a);
            break;
        case 'E':
            printf("Palavra vazia\n");
            break;
        default:
            printf("'a' ate '%c'\n",p->a);
            break;
    }
    printf("O estado inicial eh: %d\n",p->s);
    printf("Os estados finais sao:%d\n",p->s);
    while(pf != NULL)
    {
        printf("%d -> ", pf->f);
        pf = pf->proxf;
    }
    printf("NULL\n");

    printf("As funcoes de transicao sao:\n");
    while(pd != NULL)
    {
        printf("%d ->",pf->f);
        pf = pf->proxf;
    }
    printf("NULL\n");

    printf("As funcoes de transicao sao:\n");
    while(pd != NULL)
    {
        printf("%d",pd->ins);
        printf("%c",pd->a);
        printf("%d <---> ",pd->fis);
        pd = pd->proxd;
    }
    printf("NULL\n");
    return;
}

/* Write your functions here... */

/* ------------------------------------------------------------------------- */
/**
 * @ingroup GroupUnique
 * @brief Prints help information and exit
 * @details Prints help information (usually called by opt -h)
 * @return Void
 * @author Ruben Carlo Benante
 * @version 20160908.182830
 * @date 2016-09-08
 *
 */
void help(void)
{
    IFDEBUG("help()");
    printf("%s - %s\n", "exN", "Brief description");
    printf("\nUsage: %s [-h|-v]\n", "exN");
    printf("\nOptions:\n");
    printf("\t-h,  --help\n\t\tShow this help.\n");
    printf("\t-V,  --version\n\t\tShow version and copyright information.\n");
    printf("\t-v,  --verbose\n\t\tSet verbose level (cumulative).\n");
    /* add more options here */
    printf("\nExit status:\n\t0 if ok.\n\t1 some error occurred.\n");
    printf("\nTodo:\n\tLong options not implemented yet.\n");
    printf("\nAuthor:\n\tWritten by %s <%s>\n\n", "Ruben Carlo Benante", "rcb@beco.cc");
    exit(EXIT_FAILURE);
}

/* ------------------------------------------------------------------------- */
/**
 * @ingroup GroupUnique
 * @brief Prints version and copyright information and exit
 * @details Prints version and copyright information (usually called by opt -V)
 * @return Void
 * @author Ruben Carlo Benante
 * @version 20160908.182830
 * @date 2016-09-08
 *
 */
void copyr(void)
{
    IFDEBUG("copyr()");
    printf("%s - Version %s\n", "exN", VERSION);
    printf("\nCopyright (C) %d %s <%s>, GNU GPL version 2 <http://gnu.org/licenses/gpl.html>. This  is  free  software: you are free to change and redistribute it. There is NO WARRANTY, to the extent permitted by law. USE IT AS IT IS. The author takes no responsability to any damage this software may inflige in your data.\n\n", 2016, "Ruben Carlo Benante", "rcb@beco.cc");
    if(verb > 3) printf("copyr(): Verbose: %d\n", verb); /* -vvvv */
    exit(EXIT_FAILURE);
}

/* ------------------------------------------------------------------------- */
/**
 * @ingroup GroupUnique
 * @brief This function initializes some operations before start
 * @details Details to be written in
 * multiple lines
 *
 * @pre You need to call foo() before calling this function
 *
 * @param[in] i Input parameter that does bla
 * @param[out] o Parameter that outputs ble
 * @param[in,out] z The @a z variable is used as input and output
 *
 * @retval 0 Returned when bli
 * @retval 1 Error code: function returned blo
 *
 * @par Example
 * @code
 *    if(x == funcexample(i, o, z))
 *       printf("And that is it\n");
 * @endcode
 *
 * @return Void
 *
 * @warning Be carefull with blu
 * @todo Need to implement it. Its empty now. This doxygen tags are overwhelming.
 * Mandatory tags are: ingroup, brief, details, param, return, author and date.
 * The others are optional.
 *
 * @deprecated This function will be deactivated in version +11
 * @see help()
 * @see copyr()
 * @bug There is a bug with x greater than y
 * @note You can read more about it at <<a href="http://www.beco.cc">www.beco.cc</a>>
 *
 * @author Ruben Carlo Benante
 * @version 20160908.182830
 * @date 2016-09-08
 * @copyright Use this tag only if not the same as the whole file
 *
 */
void exN_init(void)
{
    IFDEBUG("exN_init()");
    /* initialization */
    return;
}

/* ------------------------------------------------------------------------- */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : C config for Vim modeline    */
/* Template by Dr. Beco <rcb at beco dot cc>       Version 20180716.101436   */

