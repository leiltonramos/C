#include<stdio.h>

int main(){

    char nome[15];
    int anoNascimento, idade;

    printf("Digite seu nome:\n>");
    fgets(nome, 15, stdin);

    nome[strcspn(nome, "\n")]=0;

    printf("Digite o ano de seu nascimento:\n>");
    scanf("%d", &anoNascimento);

    idade = 2021 - anoNascimento;

    printf("Seu nome é %s e sua idade é %d anos!", nome, idade);

    getchar();
}