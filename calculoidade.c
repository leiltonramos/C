#include<stdio.h>
#include<string.h>

int main(){

    char nome[15];
    int idade, anoNascimento;

    printf("Digite seu nome:\n>");
    fgets(nome, 15, stdin);

    nome[strcspn(nome, "\n")]=0;

    printf("Digite o ano de seu nascimento:\n>");
    scanf("%d", &anoNascimento);

    idade = 2021 - anoNascimento;

    printf("Seu nome eh %s e sua idade eh %d anos!", nome, idade);

    return(0);
}