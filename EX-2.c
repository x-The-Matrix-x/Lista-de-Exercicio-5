//Questão 2: Elabora um algoritmo que valide o nome de um cor, ou seja, o usuário poderá digitar apenas
//branco, verde e amarelo.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    char cor[20];



    printf("Por gentileza, usuario, digite uma cor: ");
           gets(cor);

    if ((strcmp (cor,"branco") == 0) || (strcmp(cor,"verde") == 0) || (strcmp(cor,"amarelo") == 0))
        printf("Usuario, essa cor eh valida!");
             else
                 printf("Usuario, essa cor eh invalida!");
                 
                 
}
