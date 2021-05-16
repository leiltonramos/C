#include<stdio.h>

int main(){

    int idade;

    printf("Digite a sua idade:\n>");
    scanf("%d", &idade);

    if(idade <= 10){
        printf("Vc eh geracao Alpha!\n");
    }else{
        if(idade <= 24){
            printf("Vc eh geracao Z!\n");
        }else{
            if(idade <= 40){
                printf("Vc eh geracao Y!\n");
            }else{
                if(idade <= 56){
                    printf("Vc eh geracao X!\n");
                }else{
                    if(idade <= 75){
                        printf("Vc eh geracao Boomer!\n");
                    }else{
                        if(idade <= 93){
                            printf("Vc eh geracao Silent!\n");
                        }else{
                            if(idade >= 94){
                                printf("Vc eh centenario! PARABENS!\n");
                            }
                        }
                    }
                }
            }
        }
    }

    getchar();

}