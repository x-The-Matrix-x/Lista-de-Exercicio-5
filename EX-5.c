//Questão 5: O usuario informa seu nome, sobrenome e numero do cpf. A partir destes dados é composta sua
//senha de acesso, formada pelo nome, primeira letra do sobrenome e os 3 primeiros números do
//cpf. Elabore um algoritmo que gere e imprima a senha.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	int i;
    char Nome[30], sobre[30], cpf[30];


     gets(Nome);
     gets(sobre);
     gets(cpf);

       printf("%s%c", Nome, sobre[0]);
       
       
      for(i = 0; i < 3; ++i)
          printf("%c", cpf[i]);
          
          return (0);
}
