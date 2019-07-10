#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include <string.h>
struct no_delta{
    char *estado_inicial;
    char simbolo;
    char  *estado_final;
    struct no_delta *proximo;

};

typedef  struct no_delta delta;

char* binario(int a){
    if(a==0){
        char* c = (char*)malloc(sizeof(char)) ;
        c[0]= '\0' ;
        return c;
    }
    else{
        int resto = a%2;
        int div = a/2;
        char *str = (char*)malloc(sizeof(char));
        sprintf(str, "%d", resto);
        return strcat(binario(div),str);
    }
}

struct no_estados{
    short valor;
    struct no_estados  *proximo;
};
typedef struct no_estados no;
struct lista_estados{
    no *inicio;
};
typedef struct lista_estados list;

no* add (no *lis,int elemento){
    if(lis == NULL){
        no *elementos=(no*)malloc(sizeof(no));
        elementos->valor= elemento ;
        elementos->proximo = NULL;
        return elementos;

    }
    else{
        lis->proximo = add(lis->proximo,elemento);
        return lis;
    }
}

char* mais(int numero,char base[]){
    if(numero == 0){
        char* a = (char*)malloc(sizeof(char)) ;
        strcpy(a,base);

        return a;
    }
    else{
        char *a =(char*)malloc(sizeof(char));
        strcpy(a,"\0");
        return strcat(a,mais(numero-1,base));
    }

}
char * reverse( char * s )
{
    int tamanho = strlen(s) ;
    int c, i, j;

    for (i = 0, j = tamanho - 1; i < j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }

    return s;
}



int bin(char e){
    if(e == '1')
        return 1;
    else
        return 0;
}
char* criarQ(char bini[],int numero,int tamanho){
    if(numero < tamanho){
        if(bini[numero]=='0'){
            char elemento[] = "";
            return strcat(elemento,criarQ(bini,numero+1,tamanho));
        }
        else{
            char str[] = "q";
            int ke = pow(2,numero);
            char binn[ke];
            sprintf(binn,"%d",numero);

            return strcat(strcat(str,strcat(binn,",")),criarQ(bini,numero+1,tamanho));
        }
    }
    else{

        char *a = (char*)malloc(sizeof(char));
        a[0] = '\0';
        return a;
    }
}
char *removeV(char *str){
    int i,j;
    i = 0;
    while(i<strlen(str))
    {
        if (str[i]==',')
        {
            for (j=i; j<strlen(str); j++)
                str[j]=str[j+1];
        }
        else i++;
    }
    return str;
}
char* criar_estadosFinais(no* e_f,char array[10000][500],int tamanho){
    if(e_f == NULL){
        return " ";
    }
    else{

        int numero = pow(2,e_f->valor);
        char n[20];
        strcpy(n,binario(numero));
        strcpy(n,mais(tamanho-strlen(n),n));
        reverse(n);
        criarQ(n,0,tamanho);

        int tamanho2 = pow(2,tamanho);

        char o[tamanho2+2];

        strcpy(o,criarQ(n,0,tamanho));

        strcpy(o,removeV(o));

        int b = 0;
        char retorno[200];

        retorno[0] = '\0';

        for(b=0;b<tamanho2;b++){
            if(strstr(array[b],o)!=NULL){
                strcpy(array[b],removeV(array[b]));
                strcat(retorno,array[b]);
                strcpy(array[b],"\0");
                strcat(retorno,":");
            }




        }
        return strcat(retorno,criar_estadosFinais(e_f->proximo,array,tamanho));

    }
}
char* criarAlfabeto(char a){
    char bloco[27];
    int t = 0;
    for(t=0;t<27;t++){
        bloco[t] = '\0';
    }
    char* retorno = bloco ;

    if(a>= 97 && a<=122){
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
delta* removee(delta* no,delta* fun){

    if(strcmp(no->estado_inicial,fun->estado_inicial)==0 && strcmp(no->estado_final,fun->estado_final)==0&& no->simbolo == fun->simbolo && fun->simbolo == 'E'){

        return no->proximo;
    }
    fun->proximo = removee(no,fun->proximo);
    return fun;
}

int tamanho_delta(delta* d){
    if(d==NULL)
        return 0;
    else
        return tamanho_delta(d->proximo) + 1;
}

delta memory(delta *a){
    delta b;
    b.estado_final = (char*)malloc(200*sizeof(char));
    strcpy(b.estado_final,a->estado_final);

    b.estado_inicial = (char*)malloc(200*sizeof(char));
    b.simbolo = a->simbolo;

    strcpy(b.estado_inicial,a->estado_inicial);
    b.proximo = (delta*)malloc(sizeof(delta));
    b.proximo = a->proximo;
    return b;
}

delta* remove_E(delta* elemento,delta *base ){
    if(base == NULL)
        return NULL;
    else{

        if(strcmp(elemento->estado_inicial,base->estado_final)==0 && base->simbolo == 'E'){
            return base->proximo;
        }
        else{
            base->proximo = remove_E(elemento,base->proximo);
            return base;
        }
    }
}

char* check_delta(delta* y,char elemento[],char alfabeto,int p){
    delta* aux = y;

    char *retorno = (char*)malloc(sizeof(char)) ;
    retorno[0]='\0';
    delta b = memory(y);
    delta* a = &b;

    while(aux!=NULL){

        if(strcmp(aux->estado_inicial,elemento)==0 && (alfabeto == aux->simbolo)){
            if(aux->simbolo=='E'){
                strcat(retorno,aux->estado_inicial);

                char e [200];
                a = remove_E(aux,a);
                strcpy(e,check_delta(a,aux->estado_final,'E',0));
                if(strcmp(e,"vazio")==0){
                    strcat(retorno,aux->estado_final);
                }else{
                    strcat(retorno,e);
                }

            }else{
                char e[200];
                strcpy(e,check_delta(a,aux->estado_final,'E',0));
                if(strcmp(e,"vazio")==0){
                    strcat(retorno,aux->estado_final);
                }else{
                    strcat(retorno,e);
                }

            }
        }
        aux= aux->proximo;

    }

    if(retorno[0]=='\0' ){
        char ger[2];
        ger[0] = alfabeto;
        ger[1] = '\0';
        strcat(retorno,ger);
        strcpy(retorno,"vazio");
    }

    return retorno;
}



void new_delta(delta* a, char estados[],char alfabeto[]){

    char l[30];
    strcpy(l,estados);

    char retorno[200][200] ;
    int p=0;
    for(p=0;p<200;p++){
        strcpy(retorno[p],"\0");
    }


    char r[300];
    for(p = 0;p<strlen(alfabeto);p++){
        char e[200];
        strcpy(e,estados);
        char u[3];

        u[0]=alfabeto[p];
        u[1] = ' ';
        u[2] = '\0';
        strcat(retorno[p],u);

        char *s = strtok(e,",");
        int i=0;
        int k =0;
        while(s!=NULL){


            strcat(r,check_delta(a,s,alfabeto[p],0));

            if(strcmp(r,"vazio")==0){
                ;
            }
            else{

                strcat(retorno[p],r);
                k=1;
            }
            s=strtok(NULL,",");

            r[0]='\0';
            i++;
        }
        if(k==0){
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
    for(p=0;p<200;p++){
        strcpy(retornox[p],"\0");
    }

    for(p=0;p<strlen(alfabeto);p++){
        strcat(retornox[p],l);
        strcat(retornox[p]," ");
        strcat(retornox[p],retorno[p]);
        printf("\n %s",retornox[p]);
    }

}

int test_list(no* no_lista, short num){
    if(no_lista == NULL){
        return 1;
    }
    else{
        if(no_lista->valor >= num){
            return 0;
        }
        else{
            return test_list(no_lista->proximo,num);
        }
    }
}

char* remove_o(char* lista , char* elemento){

    strtok(lista,":");
    char* retorno = (char*)malloc(sizeof(char));
    retorno[0] ='\0';

    while(lista != NULL){

        if(strcmp(lista,elemento)!=0){
            strcat(retorno,lista);
            strcat(retorno,":");
        }
        lista = strtok(NULL,":");
    }
    return retorno;

}



char** partes(short numero,short estado_inical,char alfabeto, no* lista_finais,delta* funcao_tr){
    if(numero<=0){
        printf("numero de estados invalidos");
        return NULL;
    }
    if(estado_inical>=numero){
        printf("\n estado inicial invalido");
        return NULL;
    }
    if(alfabeto<= 97 || alfabeto>=122){
        printf("\n alfabeto invalido");
        return NULL;
    }
    if(test_list(lista_finais,numero)==0){
        printf("\n estados finais invalidos ");
        return NULL;
    }



    int tamanho = pow(2, numero);

    int a = 0;
    char ponte[tamanho][numero+2];

    int b = 0;
    for (a=0;a<tamanho;a++){
        if(a==0){

            strcpy(ponte[0],reverse(strcpy(ponte[0],mais(numero,""))));

        }else{
            strcpy(ponte[a],binario(a));
        }



    }



    for(b=1;b<tamanho;b++){

        strcpy(ponte[b],reverse(strcpy(ponte[b],mais(numero-strlen(ponte[b]),ponte[b]))));

    }


    char aux[tamanho][500];

    strcpy(aux[0],"vazio");
    for(b=1;b<tamanho;b++){
        strcpy(aux[b],criarQ(ponte[b],0,numero));
    }

    char *aph = (char*)malloc(27*sizeof(char));

    strcpy(aph,criarAlfabeto(alfabeto));

    printf("\n ESTADOS MQ");
    for(b= 0;b<tamanho;b++){
        printf("\n e%i  %s",b,aux[b]);
    }
    printf("\n\n  ALFABETO \n %s",aph);


    char aux2[tamanho][500];
    for(b=0;b<tamanho;b++)
        strcpy(aux2[b],aux[b]);
    char b_l[20000];
    strcpy(b_l,criar_estadosFinais(lista_finais,(aux2),numero));



    printf("\n\n DELTA");
    for(b=1;b<tamanho;b++){
        new_delta(funcao_tr,aux[b],aph);
    }

    int numero2 = pow(2,estado_inical);
    char n2[20];
    strcpy(n2,binario(numero2));
    strcpy(n2,mais(numero2-strlen(n2),n2));
    reverse(n2);


    strcpy(n2,criarQ(n2,0,numero2));
    if(strcmp("vazio",check_delta(funcao_tr,removeV(n2),'E',0))!=0){


        strcpy(n2, check_delta(funcao_tr,(n2),'E',0));

    }

    printf("\n\n ESTADO IN %s",n2);
    printf( "\n \n ESTADOS ACEITA %s",b_l);

}




no* inicia_lista(){
    no* inicio = NULL;


    return inicio;
}

delta* add_delta(char* e_i,char elemento,delta* no_delt, char* e_f){
    if(no_delt == NULL){
        delta* inse = (delta*)malloc(sizeof(delta));
        inse->proximo = NULL;
        inse->simbolo = elemento;
        inse->estado_final = e_f;
        inse->estado_inicial = e_i;

        return inse;
    }
    else{

        no_delt->proximo = add_delta(e_i,elemento,no_delt->proximo,e_f);
        return no_delt;
    }
}





int main()
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

