#include <stdio.h>
#include <stdlib.h>
int main(){

int torre;
int bispo = 0;
int rainha = 0;


// Movendo a torre
for(torre = 0; torre < 5; torre++){

    printf("A torre se moveu para Direita\n");
}

printf("\n");

//Movendo o bispo

while(bispo < 5){
    printf("Bispo moveu para cima e à direita \n"); 
    bispo++;
}
printf("\n");
//Movendo a rainha

do{
   printf("A rainha andou uma casa para cima\n");
   rainha++;
}while(rainha < 8);
printf("A rainha moveu-se para esquerda\n");

printf("\n\n");

//movendo Cavalo

for (i = 0; i < baixo; i++) {
        printf("Baixo\n");
    }
    while (j < esquerda) {
        printf("Esquerda\n");
        j++;
    }


return 0;
}