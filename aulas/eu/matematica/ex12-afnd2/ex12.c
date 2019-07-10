/***************************************************************************
 *   exN.c                                   Version 20160618.013215      *
 *                                                                         *
 *   Converte AFND para AFD                                                *
 *   Copyright (C) 2016         by Ruben Carlo Benante                     *
 ***************************************************************************
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; version 2 of the License.               *
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
 * @brief Converte AFND para AFD
 * @details This program really do a nice job as a template, and template only!
 * @version 20160618.013215
 * @date 2016-06-18
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
 *   $gcc exN.c -o ex12.x -Wall
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

/* ---------------------------------------------------------------------- */
/* includes, definitions, etc., that cannot be in exN.h */
#include <stdio.h>
#include <stdlib.h>
/*#include <getopt.h>*/
/*#include <time.h>*/
#include <math.h>
#include <string.h>
/*#include <malloc.h>*/

#include "ex12.h" /* To be created for this template if needed */

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
 * @version 20160618.013215
 * @date 2016-06-18
 *
 */
/*int main(int argc, char *argv[])
{
    int opt; * return from getopt() */

/*    IFDEBUG("Starting optarg loop...");

    * getopt() configured options:
     *        -h  help
     *        -V  version
     *        -v  verbose
     */
/*    opterr = 0;
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
*/
  /*  if(verb)
        printf("Verbose level set at: %d\n", verb);

    exN_init(); * i  nitialization function */

    /* ...and we are done */
    /* Write your code here... */

    struct no_delta
    {
        char *estado_inicial;
        char simbolo;
        char *estado_final;
        struct no_delta *proximo;
    };

    typedef struct no_delta delta;
    char* binario(int a)
    {
        if(a==0)
          { char* c=(char*)malloc(sizeof(char));
            c[0]= '\0';
            return c;

        }
        else
        
        {
            int resto = a%2;
            int div = a/2;
            char *str = (char*)malloc(sizeof(char));
            sprintf(str, "%d", resto);
            return strcat(binario(div), str);
        }
    }

    struct no_estados
    {
        short valor;
        struct no_estados *proximo;
    };

    typedef struct no_estados no;
    
    struct lista_estados
    {
        no *inicio;
    };

    typedef struct lista_estados list;

    no* add(no *lis, int elemento)
    {
        if(lis==NULL)
        {
            no *elementos=(no*)malloc(sizeof(no));
            elementos->valor= elemento;
            elementos->proximo = NULL;
            return elementos;
        }
        else
        {
            lis->proximo = add(lis->proximo, elemento);
            return lis;
        }
    }

    char* mais(int numero, char base[])
    {
        if(numero == 0)
        {
           /* char a[strlen(base)+2];*/
            char* a = (char*)malloc(sizeof(char));
            strcpy(a,base);
            
            return a;
        }
        else
        {
            /*char a[200]="0";*/
            char *a=(char*)malloc(sizeof(char));
            strcpy(a,"\0");
            return strcat(a,mais(numero-1,base));
        }
    }

    char * reverse(char * s)
    {
        int tamanho = strlen(s);
        int c, i, j;

        for(i = 0, j = tamanho - 1; i < j; i++, j--)
        {
            c = s[i];
            s[i] = s[j];
            s[j] = c;
        }

        return s;
    }

    int bin(char e)
    {
        if(e == '1')
            return 1;
        else
            return 0;
    }

    char* criarQ(char bini[],int numero,int tamanho)
    {
        if(numero < tamanho)
        {
            if(bini[numero]=='0')
            {
                char elemento[] = "";
                return strcat(elemento,criarQ(bini,numero+1,tamanho));
            }
            else
            {
                char str[] = "q";
                int ke = pow(2, numero);
                char binn[ke];
                sprintf(binn,"%d",numero);

                return strcat(strcat(str,strcat(binn,",")),criarQ(bini,numero+1,tamanho));
            }
        }
        else
        {
            /* char a[] = "\0";*/
            char *a=(char*)malloc(sizeof(char));
            return a;
        }
    }

    char *removeV(char *str)
    {
        int i, j;

        i = 0;

        while(i<strlen(str))
        {
            if(str[i]==',')
            {
                for(j=i; j<strlen(str); j++)
                    str[j]=str[j+1];
            }
            else
                i++;
        }
        return str;
    }

    char* criar_estadosFinais(no* e_f,char array[10000][500],int tamanho)
    {
        if(e_f == NULL)
        {
            return " ";
        }
        else
        {
            int numero = pow(2,e_f->valor);
            char n[20];
            strcpy(n,binario(numero));
            strcpy(n,mais(tamanho-strlen(n),n));
            reverse(n);
            criarQ(n,0,tamanho);

            int tamanho2 = pow(2,tamanho);

            char o[tamanho2+2];

            strcpy(o, criarQ(n,0,tamanho));

            strcpy(o,removeV(0));

            int b = 0;
            char retorno[200];

            retorno[0] = '\0';

            for(b=0;b<tamanho2;b++)
            {
                if(strstr(array[b],o)!=NULL)
                {
                    strcpy(array[b],removeV(array[b]));
                    strcat(retorno,array[b]);
                    strcpy(array[b],"\0");
                    strcat(retorno,":");
                }
            }
            return strcat(retorno,criar_estadosFinais(e_f->proximo,array,tamanho));
        }
    }

    //p2
    char* criarAlfabeto(char a)
    {
        char bloco[27];
        int t = 0;
        for(t=0;t<27;t++){
            bloco[t] = '\0';
        }
        char* retorno = bloco ;

        if(a>= 97 && a<=122)
        {
            char b=97;
            int i= 0;
            for(b=97;b<=a;b++){
                *retorno = b;
                retorno++;
                i++;
            }
            int k =0;
            for(k = 0 ;k<i;k++){
                retorno--;
            }
        }
        return retorno;
    }
    delta* removee(delta* no,delta* fun)
    {
        if(strcmp(no->estado_inicial,fun->estado_inicial) == 0 && strcmp(no->estado_final,fun->estado_final)==0 && no->simbolo == fun->simbolo && fun->simbolo == 'E')
        {
            return no->proximo;
        }
        fun->proximo = removee(no,fun->proximo);
        return fun;
    }

    int tamanho_delta(delta* d)
    {
        if(d==NULL)
            return 0;
        else
            return tamanho_delta(d->proximo) + 1;
    }

    delta memory(delta *a)
    {
        delta b;
        b.estado_final = (char*)malloc(200*sizeof(char));
        strcpy(b.estado_final, a->estado_final);

        b.estado_inicial = (char*)malloc(200*sizeof(char));
        b.simbolo = a->simbolo;

        strcpy(b.estado_inicial, a->estado_inicial);
        b.proximo = (delta*)malloc(sizeof(delta));
        b.proximo = a->proximo;
        return b;
    }

    delta* remove_E(delta* elemento, delta *base)
    {
        if(base = NULL)
            return NULL;
        else
        {
            if(strcmp(elemento->estado_inicial, base->estado_final)==0 && base->simbolo == 'E')
            {
                return base->proximo;
            }
            else
            {
                base->proximo = remove_E(elemento, base->proximo);
                return base;
            }
         }
    }

    char* check_delta(delta* y, char elemento[], char alfabeto, int p)
    {
        delta* aux = y;

        /*char retorno[200];*/
        char *retorno=(char*)malloc(sizeof(char));
        retorno[0]='\0';
        delta b = memory(y);
        delta* a= &b;

        while(aux!=NULL)
        {
            if(strcmp(aux->estado_inicial, elemento)==0 && (alfabeto == aux->simbolo))
            {
                if(aux->simbolo=='E')
                {
                    strcat(retorno, aux-> estado_inicial);

                    char e[200];
                    a = remove_E(aux,a);
                    strcpy(e,check_delta(a,aux->estado_final, 'E', 0));
                    if(strcmp(e,"vazio")==0)
                    {
                        strcat(retorno, aux->estado_final);
                    }
                    else
                    {
                        strcat(retorno, e);
                    }
                }
                else
                {
                    char e[200];
                    strcpy(e, check_delta(a, aux->estado_final, 'E', 0));
                    if(strcmp(e, "vazio")== 0)
                    {
                        strcat(retorno, aux->estado_final);
                    }
                    else
                    {
                        strcat(retorno, e);
                     }
                 }
             }
            aux= aux->proximo;
          }
      
    if(retorno[0]=='\0')
    { 
        char ger[2];
        ger[0] = alfabeto;
        ger[1] = '\0';
        strcat(retorno,ger);
        strcpy(retorno,"vazio");
    } 
    return retorno;
}
void new_delta(delta* a, char estados[],char alfabeto[])
{
    char l[30];
    strcpy(l,estados);

    char retorno [200][200];
    int p=0;
    for(p=0;p<200;p++)
    { 
        strcpy(retorno[p],"\0");
    } 
    char r[300];
    for(p = 0;p<strlen(alfabeto);p++)
    {
        char e[200];
        strcpy(e,estados);
        char u[3];

        u[0]=alfabeto[p];
        u[1] = ' ';
        u[2] = '\0';
        strcat(retorno[p],u);

        char  *s = strtok(e,",");
        int i=0;
        int k=0;
        while(s!=NULL)
        {
            strcat(r,check_delta(a,s,alfabeto[p],0));

            if(strcmp(r,"vazio")==0)
            {
                ;
            }
            else
            {
   
                strcat(retorno[p],r);
                k=1;
            }
            s=strtok(NULL,",");

            r[0]='\0';
            i++;
        }
        if(k==0)
        {
            char a2[200];
            a2[0] = alfabeto[p];
            a2[1] = ' ';
            a2[2] = '\0';
            strcpy(retorno[p],"vazio");
            strcat(a2,retorno[p]);
            strcpy(retorno[p],a2);
        } 
    }

    char retornox[200][2000];
    for(p=0;p<200;p++)
    {
        strcpy(retornox[p],"\0");
    } 

    for(p=0;p<strlen(alfabeto);p++)
    {
        strcat(retornox[p],l);
        strcat(retornox[p]," ");
        strcat(retornox[p],retorno[p]);
        printf("\n %s",retornox[p]);
    }
}
    int test_list(no* no_lista, short num)
    {
        if(no_lista == NULL)
        {
            return 1;
        }
        else
        {
            if(no_lista->valor >=num)
        {
            return 0;
        }
        else
        {
            return test_list(no_lista->proximo,num);
        }
        }
    }
    char remove_o(char* lista, char* elemento)
    {
        strtok(lista,":");
        char* retorno=(char*)malloc(sizeof(char));
        retorno[0] ='\0';

        while(lista != NULL)
        {
            if(strcmp(lista,elemento) !=0)
            {
                strcat(retorno,lista);
                strcat(retorno,":");
            }
            lista = strtok(NULL,":");
        }
        return retorno;
    }
        
             
    char** partes(short numero, short estado_inicial,char alfabeto, no* lista_finais,delta* funcao_tr)
    {
        if(numero<=0)
        {
            printf("numero de estados invalidos");
            return NULL;
        }
        if(estado_inicial>=numero)
        {
            printf("\n estado inicial invalido");
            return NULL;
        }
        
        if (alfabeto < 97 || alfabeto > 122)
        {
            printf("\n estado inicial");
            return NULL;
        }
        if(test_list(lista_finais,numero)==0)
        {
            printf("\n estados finais invalidos ");
            return;
        }

        int tamanho = pow(2,numero);
        printf("\n s \n %d",tamanho);
        int a = 0;
        char ponte[tamanho] [numero+2];

        int b = 0;
        for (a=0;a<tamanho;a++)
        {
            printf("houve um erro em %d",a);
            if(a==0)
            {
                strcpy(ponte[0],reverse(strcpy(ponte[0],mais(numero,""))));
                printf("\n p0 %s", mais(numero,"0"));
            }
            else
            {
           
                strcpy(ponte[a],binario(a));
            }



        }

        for (b=1;b<tamanho;b++)
        {
            strcpy(ponte[b],reverse(strcpy(ponte[b],mais(numero-strlen(ponte[b]),ponte[b]))));
        }

        char aux[tamanho] [500];

        strcpy(aux[0],"vazio");
        for(b=1;b<tamanho;b++)
        {
            strcpy(aux[b],criarQ(ponte[b],0,numero));
        }

        char  *aph=malloc(27*sizeof(char));

        strcpy(aph,criarAlfabeto(alfabeto));

        printf("\n ESTADOS MQ");
        for(b=0;b<tamanho;b++)
        {
            printf("\n e%i %s",b,aux[b]);
        }
        printf("\n\n ALFABETO \n %s",aph);
        

        char aux2[tamanho][500];
        for(b=0;b<tamanho;b++)
            strcpy(aux2[b],aux[b]);
        char b_1[20000];
        strcpy(b_1,criar_estadosFinais(lista_finais,(aux2),numero));

        /*------------DELTA------------------------------------------*/

        printf("\n\n DELTA");
        for(b=1;b<tamanho;b++)
        {
            new_delta(funcao_tr,aux[b],aph);
        }
        int numero2=pow(2,estado_inicial);
        char n2[20];
        strcpy(n2,binario(numero2));
        strcpy(n2,mais(numero2-strlen(n2),n2));
        reverse(n2);

        strcpy(n2,criarQ(n2,0,numero2));
        if(strcmp("vazio",check_delta(funcao_tr,removeV(n2),'E',0))!=0)
        {
            strcpy(n2,check_delta(funcao_tr,(n2),'E',0));
        }
        printf("\n\n ESTADO IN %s",n2);
        printf("\n\n ESTADO ACEITA %s",b_1);

    }

    no* inicia_lista()
    {
        no* inicio=NULL;
    return inicio;
    

}

delta* add_delta(char* e_i,char elemento,delta* no_delt,char* e_f)
{
    if(no_delt==NULL)
    {
        delta* inse=(delta*)malloc(sizeof(delta));
        inse->proximo=NULL;
        inse->simbolo=elemento;
        inse->estado_final=e_f;
        inse->estado_inicial=e_i;
        printf("le \n %d",inse);
        return inse;
    }
    else
    {
        printf("entrou");
        no_delt->proximo=add_delta(e_i,elemento,no_delt->proximo,e_f);
        return no_delt;
    }
}

/* int main(int argc, char *argv[])
{
    char ponter[2][120];
    strcpy(ponter[0],criarQ("101",0,3));
    strcpy(ponter[1],binario(2));

    delta* no_d = NULL;

    no_d = add_delta("q0",'a',no_d,"q0");
    no_d = add_delta("q0",'a',no_d,"q1");
    no_d = add_delta("q0",'b',no_d,"q0");
    no_d = add_delta("q1",'b',no_d,"q2");

    no* inicio;
    inicio = inicia_list();
    inicio = add(inicio,2);

    //inicio = add(inicio,3);
     partes(3,0,'b',inicio,no_d);
    char r[200][200];
} */   

int main(int argc,char *argv[])
{
    char ponter[2][120];
    strcpy(ponter[0],criarQ("101",0,3));
    strcpy(ponter[1],binario(2));

    delta* no_d = NULL;

    no_d = add_delta("q0",'a',no_d,"q0");
    no_d = add_delta("q0",'a',no_d,"q1");
    no_d = add_delta("q0",'b',no_d,"q0");
    no_d = add_delta("q1",'b',no_d,"q2");
    no* inicio;
    inicio = inicia_lista();
    inicio = add(inicio,2);
    partes(3,0,'b',inicio,no_d);
    char r[200][200];
}
/*-------------------------------------------------------------------------------*/

/* Write your functions here... */

/* ---------------------------------------------------------------------- */
/***
 * @ingroup GroupUnique
 * @brief Prints help information and exit
 * @details Prints help information (usually called by opt -h)
 * @return Void
 * @author Ruben Carlo Benante
 * @version 20160618.013215
 * @date 2016-06-18
 *
 *
void help(void)
{
    IFDEBUG("help()");
    printf("%s - %s\n", "exN", "Converte AFD, AFND e ER");
    printf("\nUsage: %s [-h|-v]\n", "exN");
    printf("\nOptions:\n");
    printf("\t-h,  --help\n\t\tShow this help.\n");
    printf("\t-V,  --version\n\t\tShow version and copyright information.\n");
    printf("\t-v,  --verbose\n\t\tSet verbose level (cumulative).\n");
    /* add more options here 
    printf("\nExit status:\n\t0 if ok.\n\t1 some error occurred.\n");
    printf("\nTodo:\n\tLong options not implemented yet.\n");
    printf("\nAuthor:\n\tWritten by %s <%s>\n\n", "Ruben Carlo Benante", "rcb@beco.cc");
    exit(EXIT_FAILURE);
}

/* ---------------------------------------------------------------------- */
/***
 * @ingroup GroupUnique
 * @brief Prints version and copyright information and exit
 * @details Prints version and copyright information (usually called by opt -V)
 * @return Void
 * @author Ruben Carlo Benante
 * @version 20160618.013215
 * @date 2016-06-18
 *
 *
void copyr(void)
{
    IFDEBUG("copyr()");
    printf("%s - Version %s\n", "exN", VERSION);
    printf("\nCopyright (C) %d %s <%s>, GNU GPL version 2 <http://gnu.org/licenses/gpl.html>. This  is  free  software: you are free to change and redistribute it. There is NO WARRANTY, to the extent permitted by law. USE IT AS IT IS. The author takes no responsability to any damage this software may inflige in your data.\n\n", 2016, "Ruben Carlo Benante", "rcb@beco.cc");
    if(verb > 3) printf("copyr(): Verbose: %d\n", verb); /* -vvvv 
    exit(EXIT_FAILURE);
}
}


/***
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
 * @version 20160618.013215
 * @date 2016-06-18
 * @copyright Use this tag only if not the same as the whole file
 *
 */

/*void exN_init(void)
{
    IFDEBUG("exN_init()");
    * initialization */
/*    return;
}

* ------------------------------------------------------------------ */
/* C config for Vim modeline                                          */
/* vi: set ai cin et ts=4 sw=4 tw=0 wm=0 fo=croqltn :                 */
/* Template by Dr. Beco <rcb at beco dot cc>  Version 20160614.152950 */

