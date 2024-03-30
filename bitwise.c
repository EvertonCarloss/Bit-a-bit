#include <stdio.h>
#include <locale.h>

void main () {

/* OPERADORES BITWISE.
 CONJUNÇÃO , DISJUNÇÃO E DISJUNÇÃO/EXCLUSIVA.
        // ( &)                      ( | )                                  (^)   */

setlocale(LC_ALL,"Portuguese");

// DECLARANDO A VARIAVEIS.
int a , b, conju, disj, excl;

// INSERINDO O DADOS.
printf("Digite o primeiro número: ");
scanf("%d", &a);
printf("Digite o segundo número: ");
scanf("%d",&b);

// CALCULO DAS OPERAÇÕES EM BITWISE.
conju = a & b;
disj = a | b;
excl = a ^ b ;
printf("------------- Operações bitwise ----------------\n");

// SAÍDA DE DADOS.

printf("Calculando %d & %d é igual a %d\n", a, b , conju);
printf("Calculando %d | %d é igual a %d\n", a, b, disj);
printf("Calculando %d ^ %d é igual a %d\n", a , b ,excl);


}
