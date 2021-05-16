#include<stdio.h>

int main(){

    int contador = 1, alunos;
    float total = 0, media, nota;

    printf("Digite a quantidade de alunos:\n>");
    scanf("%d", &alunos);

    while(contador <= alunos){
        printf("Digite a nota:\n>");
        scanf("%f", &nota);
        total = total + nota;
        contador++;    
    }

    media = total / alunos;

    printf("A media da sala eh: %f\n", media);


    getchar(0);
}