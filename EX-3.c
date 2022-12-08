//Questão 3: Elabore um algoritmo que receba os dados: nome completo, e-mail e endereço de um usuário e
//faça um backup de todos eles em novas variávies.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
char NomeCompleto[50], Email[50], endereco[50], bNomeCompleto[50], bEmail[50], bendereco[50];


    gets(NomeCompleto);
    gets(Email);
    gets(endereco);

      strcpy(bNomeCompleto,NomeCompleto);
      strcpy(bEmail,Email);
      strcpy(bendereco,endereco);


printf("%s\n%s\n%s", bNomeCompleto, bendereco, bEmail);

     return (0);
}
