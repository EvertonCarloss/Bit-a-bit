#include <stdio.h>
#include <locale.h>

void main () {

/* OPERADORES BITWISE.
 CONJUN��O , DISJUN��O E DISJUN��O/EXCLUSIVA.
        // ( &)                      ( | )                                  (^)   */

setlocale(LC_ALL,"Portuguese");

// DECLARANDO A VARIAVEIS.
int a , b, conju, disj, excl;

// INSERINDO O DADOS.
printf("Digite o primeiro n�mero: ");
scanf("%d", &a);
printf("Digite o segundo n�mero: ");
scanf("%d",&b);

// CALCULO DAS OPERA��ES EM BITWISE.
conju = a & b;
disj = a | b;
excl = a ^ b ;
printf("------------- Opera��es bitwise ----------------\n");

// SA�DA DE DADOS.

printf("Calculando %d & %d � igual a %d\n", a, b , conju);
printf("Calculando %d | %d � igual a %d\n", a, b, disj);
printf("Calculando %d ^ %d � igual a %d\n", a , b ,excl);


}
