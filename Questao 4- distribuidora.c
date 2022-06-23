#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

void main(void){
    setlocale(LC_ALL, "Portuguese");
    float valor[5] ={
    67836.43, 36678.66, 29229.88, 27165.48, 19849.53
    },soma, porcetagem;
    char estado [5][6] ={
    "SP","RJ","MG","ES","Outros"
    };
    int i;
    soma=0;
    for (i=0; i< 5; i++){
        soma= soma + valor[i];
    }
    printf("\nPorcetagem de cada estado:");
    for (i=0; i< 5; i++){
        porcetagem= valor[i]*100/soma;
        printf("\n %s : %.2f%%", estado[i], porcetagem);
    }
    printf("\n Valor total: R$ %f", soma);


}
