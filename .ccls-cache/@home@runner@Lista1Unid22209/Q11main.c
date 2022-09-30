#include <stdio.h>
// Quando for utilizar o algoritmo sempre lembrar de excluir o número em frente ao main na linha abaixo!!!!
int main()
{
  float cel, fah;
  printf("Qual o valor da temperatura em celsius = ");
  scanf("%f" , &cel);

  fah = (cel * 9/5) + 32;

  printf("O valor de temperatura %.2f em Celsuis equivale à %.2f em Fahrenheit", cel,fah);
}
/*11)	Faça um algoritmo para ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A fórmula de conversão é F = (9 * C + 160)/5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.

Algoritmo converteemFahrenheit
Real c,f;
Inicio
   Mostre(“Informe a temperatura em Celsius: ”);
   Leia (c);
   f= (9 * C + 160)/5
   Mostre(“Temperatura em Fahrenheit: ”, f);
Fim.*/