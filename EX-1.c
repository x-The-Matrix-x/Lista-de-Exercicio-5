//Questão 1: Elabore um algoritmo que receba o nome completo de um cliente e imprima a quantidade de
//caracteres digitados.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    char palavra[50];
    int i, tamanho;
    
    printf("Por favor, digite o seu nome: ");
    fgets(palavra, 50, stdin);
    
    
    for(i = 0, tamanho = 0; palavra[i] != '\0'; i++)
        tamanho++;
        tamanho = tamanho - 1;

    printf("%d\n", tamanho);
    
    return (0);
}
