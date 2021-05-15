#include<stdio.h>

int main(){

    char nome1[15], nome2[15];
    int compare;

    printf("Digite seu nome:\n>");
    fgets(nome1, 15, stdin);

    nome1[strcspn(nome1, "\n")]=0;

    printf("Repita seu nome:\n>");
    fgets(nome2, 15, stdin);

    nome2[strcspn(nome2, "\n")]=0;

    compare = strcmp(nome1, nome2);
        if (compare == 0)
            printf("Seu nome esta correto!");
        else
            printf("Nome incorreto!");

    getchar();
}