#include <stdio.h>
// Quando for utilizar o algoritmo sempre lembrar de excluir o número em frente ao main na linha abaixo!!!!
main9()
{
 float tgasto, vm, dist, lto;
  printf("\nInforme o tempo gasto(em horas): ");
  scanf("%f", &tgasto);

  printf("\nInforme a velocidade(km/h): ");
  scanf("%f", &vm);

  dist = tgasto * vm;
  lto = dist/12;
  printf("A velocidade foi = %.2f km/h \nO tempo gasto foi = %.2f h \nA distância percorrida foi = %.2f km \nA quantidade de litros usados foi = %.2f L", vm, tgasto, dist, lto);
}
/*18)	Faça um algoritmo para uma oficina que deseja monitorar seus carros. Para isso, saiba que esses automóveis monitorados fazem 12 km com um litro de combustível. Para isso, o algoritmo deve receber o tempo gasto (TEMPO) e a velocidade média (VELOCIDADE) durante a viagem. Desta forma, será possível obter a distância percorrida com a fórmula: DISTANCIA = TEMPO * VELOCIDADE. Possuindo o valor da distância, basta calcular a quantidade de litros de combustível utilizada na viagem com a fórmula: LITROS_USADOS = DISTANCIA / 12. Ao final, o programa deve apresentar os valores da velocidade média (VELOCIDADE), tempo gasto na viagem (TEMPO), a distância percorrida (DISTANCIA) e a quantidade de litros (LITROS_USADOS) utilizada na viagem.

Algoritmo salarioProfessor 
Real tempo,velocidade,distancia,litros_usados;
Inicio
	Mostre(“Informe tempo gasto pelo carro=”);
 	Leia (tempo);
 	Mostre(“Informe a velocidade média=);
   	Leia (velocidade);
	distancia=tempo*velocidade;
	litros_usados=distancia/12;
	Mostre (“a velocidade media do carro foi=”,velocidade, “o tempo gasto na viagem foi=”,tempo, “a distancia percorrida foi=”,distancia, “a quantidade de litros usados na viagem foi=”,litros_usados);
Fim*/