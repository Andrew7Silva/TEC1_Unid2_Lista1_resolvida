#include <stdio.h>
main()
{
  float a, b, h, p;
  printf("Informe a Base: ");
  scanf("%f", &b);
  printf("Informe a Altura: ");
  scanf("%f", &h);
  a = b * h;
  p = 2 * (b+h);
  printf("Informe a ");
}


/*16)	Faça um algoritmo que receba a base e a altura de um retângulo e mostre/exiba as seguintes saídas: perímetro e área, com base nas fórmulas: 
PERIMETRO = 2 * (BASE + ALTURA)
AREA = BASE * ALTURA

Algoritmo retangulo
Real area, base, altura, perimetro;
Inicio
   Mostre(“Informe a Base”);
   Leia (base);
   Mostre(“Informe a Altura”);
   Leia (altura);
   area=base*altura;
   perímetro=2*(base+altura);
   Mostre(“Area do Retangulo eh:”, área, “Perimetro do retângulo eh=”,perimetro);
Fim.*/