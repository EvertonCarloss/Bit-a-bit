#include <stdio.h>
#include <locale.h>

void main () {

setlocale(LC_ALL,"Portuguese");

// TRABALHANDO COM BITWISE DE DESLOCAMENTO ( << - ESQUERDA) ( >> - DIREITA )

// >> - ELE ANDA BITS PARA DIREITA.
// << - ELE ANDA BITS PARA ESQUERDA

// DECLARANDO VARIAVEIS.
int numero,deslocamento,direita, esquerda;

// INSERINDO DADOS.
printf("Digite um n�mero: ");
scanf("%d",&numero);
printf("Digite o deslocamento: ");
scanf("%d",&deslocamento);

// COMANDO PARA O DESLOCAMENTO.
direita = numero >> deslocamento;
esquerda = numero << deslocamento;

// SA�DA DE DADOS.
printf("Calculando %d >> %d � igual a %d\n",numero,deslocamento,direita);
printf("Calculando %d << %d � igual a %d", numero , deslocamento,esquerda);

}
