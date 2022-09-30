#include <stdio.h>
// Quando for utilizar o algoritmo sempre lembrar de excluir o número em frente ao main na linha abaixo!!!!
int main3()
{
 float vol,comp, larg, alt;
  printf("Informe o comprimento da caixa: ");
  scanf("%f", &comp);

  printf("Informe a largura da caixa: ");
  scanf("%f", &larg);

  printf("Informe a altura da caixa: ");
  scanf("%f", &alt);

  vol = comp * larg * alt;

  printf("o volume da caixa é: %.2f", vol);
}
/* 12)	Elaborar um algoritmo que calcule e apresente o volume de uma caixa retangular, por meio da fórmula: VOLUME = COMPRIMENTO * LARGURA * ALTURA. Para isso, receba como entrada o COMPRIMENTO, LARGURA e ALTURA da caixa. 
Algoritmo volumecaixa
Real volume, comp, larg, alt;
Inicio
   Mostre(“Informe o comprimento da caixa: ”);
   Leia (comp);
   Mostre(“Informe a largura da caixa: ”);
   Leia (larg);
    Mostre(“Informe a altura da caixa: ”);
   Leia (alt);
   volume=comp*larg*alt;
   Mostre(“Volume da caixa e=”, volume);*/