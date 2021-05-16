#include<stdio.h>
#include<string.h>

int main(){

    char texto[1024];
    int palavras, inteiro; /* Na comparacao com EOF, necessita inteiro*/    

    printf("Digite seu texto com até 1024 caracteres e termine com a palavra fim\n>");

    do{
        inteiro = scanf("%s", &texto);
        if(inteiro==EOF)break;
        palavras++;
    }while(strcmp(texto, "fim")!=0);

    printf("Seu texto contem %d palavras!\n", palavras);

    return(0);
}