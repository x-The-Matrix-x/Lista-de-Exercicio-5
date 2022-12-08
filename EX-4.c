//Questão 4: Elabore um algoritmo que receba o primeiro nome, o(s) nome(s) do meio, e o ultimo nome do
//usuário. Concatene os dados e imprima o valor final.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
char PrimeiroNome[30], sobre[30],ult[30];

     gets(PrimeiroNome);
     gets(sobre);
     gets(ult);

     strcat(PrimeiroNome,sobre);
     strcat(PrimeiroNome,ult);

          printf("%s", PrimeiroNome);

}
