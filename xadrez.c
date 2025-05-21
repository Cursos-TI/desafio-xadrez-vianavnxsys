#include <stdio.h>

int main(){
    int i;

    //Mover a Torre 5 casas para a direita
    printf("***Movimento da Torre***\n");
    for(int i = 0; i < 5; i++){
        printf("Direita\n"); //Direção do movimento
    }
    //Mover o bispo 5 casas na diagonal
        i = 0;
        printf("***Movimento do Bispo***\n");
        while(i < 5){
            printf("Diagonal para cima e a direita\n"); //Direção do movimento
            i++;
        }

    //Mover a rainha 8 casas para a esquerda
    i = 0;
    printf("***Movimento da Rainha***\n");
    do{
        printf("Esquerda\n");
        i++;
    }while(i < 8);

    
    return 0;
}
