/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1060

Faça um programa que leia 6 valores. Estes valores serão somente negativos ou positivos (desconsidere os valores nulos). 
A seguir, mostre a quantidade de valores positivos digitados.
Entrada: Seis valores, negativos e/ou positivos.
Saída: Imprima uma mensagem dizendo quantos valores positivos foram lidos. */

#include <stdlib.h>
#include <stdio.h>
  
int main() {

    //declaração de variáveis 
    float valor; 
    int i, soma = 0;
     
     //laço de repetição para leitura de uma quantidade de valores, no caso, 6
    for(i = 0; i < 6; i ++)
    {
        scanf("%f", &valor);
        if (valor > 0){ //verifica quais valores são positivos
            soma = soma + 1; //incrementa uma variável contadora da quantidade de positivos 
        }
    } 
    printf("%d valores positivos\n", soma); //imprime o resultado na tela
     
    return 0;
}
