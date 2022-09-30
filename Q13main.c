#include <stdio.h>
// Quando for utilizar o algoritmo sempre lembrar de excluir o número em frente ao main na linha abaixo!!!!
int main4()
{
  float a, b, c, res;
  printf("Informe o primeiro valor: ");
  scanf("%f", &a);
  printf("Informe o segundo valor: ");
  scanf("%f", &b);
  printf("Informe o terceiro valor: ");
  scanf("%f", &c);
  res = (a*a)+(b*b)+(c*c);
  printf("A soma dos quadrados é = %.2f", res);
}
/*13)	Elaborar um algoritmo que efetue a leitura de três valores (A, B e C) e apresente como resultado final a soma dos quadrados dos valores lidos
Algoritmo TresValores
Real a,b,c,result; 
Inicio
   Mostre (“Informe o valor 1: ”);
   Leia (a);
   Mostre (“Informe o valor 2: ”);
   Leia (b);
   Mostre (“Informe o valor 3: ”);
   Leia (c);
   Result= (a*a) + (b*b) + (c*c); 
   Mostre (“a soma do quadrados dos valores lido e=”, result);
Fim*/

