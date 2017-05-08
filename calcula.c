#include <stdio.h>
/*
Faça um programa em C ( calcula.c) que declare 2 valores, x e y e:
calcule e imprima a soma, subtração, multiplicação e divisão destes 2 números
*/
int main()
{
  int x, y;
  int soma;
  int subtracao;
  int multiplicacao;
  float divisao;
  
  x = 5;
  y = 10;
  
  soma = x + y;
  subtracao = x - y;
  multiplicacao = x * y;
  divisao = (float)x / y;
  
  //imprime na tela os valores calculados
  printf("\nSoma = %d", soma);
  printf("\nSubtracao = %d", subtracao);
  printf("\nMultiplicacao = %d", multiplicacao);
  printf("\nDivisao = %f\n", divisao);
  
  return 0;
}