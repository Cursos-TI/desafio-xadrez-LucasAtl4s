#include <stdio.h>

void Torre(int torre){
if(torre > 0 && torre <= 5){
        printf("Linha reta\n");
       Torre(torre - 1);
    }
}

void Bispo(int bispo){

    if(bispo > 0 && bispo <= 5){
        printf("Diagonal\n");
        Bispo(bispo - 1);
    }
}

void Rainha(int rainha){

    if(rainha > 0 && rainha <=8){
        printf("A Frente\n");
        Rainha(rainha - 1);
    }else if(rainha=8){printf("Se moveu para esquerda\n");}
}


void Cavalo(int cavalo) {
    for (int i = 1; i <= cavalo; i++) {
        for (int j = 1; j <= 2; j++) {
            if (j == 1) {
                printf("Cima\n"); // Primeira parte do "L": duas casas para cima
            } else {
                printf("Cima\n");
            }
        }
        printf("Direita\n"); // Segunda parte do "L": uma casa para a direita
    }
}

int main(){


int movimento;

printf("Escolha uma peça para jogar:\n");
    printf("1.TORRE\n");
    printf("2.BISPO\n");
    printf("3.RAINHA\n");
    printf("4.CAVALO\n");
    scanf("%d", &movimento);




    switch (movimento)
    {
    case 1: 
        Torre(5);
        break;
    

        case 2:
      Bispo(5);
        break;

        case 3:
      Rainha(8);
        break;

        case 4:
        Cavalo(1);
        break;
    }






return 0;
}
