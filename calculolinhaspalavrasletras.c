#include<stdio.h>

int main(){

    char texto[1024];
    int linha = 1, palavra = 0, letra = 0;

    printf("Digite seu texto até 1024 caracteres e termine com ~:\n>");
    scanf("%[^~]", &texto);

    for(int i=0; texto[i]!='\0'; i++){
        if(texto[i]=='\n'){
            linha++;
            palavra++;
        }else{
            if(texto[i]==' '||texto[i]=='\t'){
                palavra++;
            }else{
                letra++;
            }
        }
    }

    printf("Quantidade de linhas eh: %d\n", linha);
    printf("Quantidade de palavras eh: %d\n", palavra);
    printf("Quantidade de letras eh: %d\n", letra);

    return(0);
}