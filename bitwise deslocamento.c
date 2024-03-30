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
printf("Digite um número: ");
scanf("%d",&numero);
printf("Digite o deslocamento: ");
scanf("%d",&deslocamento);

// COMANDO PARA O DESLOCAMENTO.
direita = numero >> deslocamento;
esquerda = numero << deslocamento;

// SAÍDA DE DADOS.
printf("Calculando %d >> %d é igual a %d\n",numero,deslocamento,direita);
printf("Calculando %d << %d é igual a %d", numero , deslocamento,esquerda);

}
