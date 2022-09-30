#include <stdio.h>
// Quando for utilizar o algoritmo sempre lembrar de excluir o número em frente ao main na linha abaixo!!!!
main8()
{
  float totAulas, valHoraAula, descINSS, salBruto, salLiq; 
  printf ("\nInforme o número de aulas ministradas: ");
  scanf("%f", &totAulas);
  
  printf("\nInforme o valor da hora/aula: ");
  scanf("%f", &valHoraAula);
  
  printf("\nInforme o percentual de desconto INSS: ");
  scanf("%f", &descINSS);

  salBruto = totAulas * valHoraAula;
  salLiq = salBruto - (salBruto*(descINSS/100));
  printf("\nO salário líquido do professor é: %.2f", salLiq);
}
/*17)	Faça um algoritmo que efetue o cálculo do salário líquido de um professor. Os dados fornecidos serão: valor da hora aula, número de aulas dadas no mês e percentual de desconto do INSS.
Algoritmo salarioProfessor 
Real totAulas, salBruto, salLiq, valorHoraAula, descInss;
Inicio
	Mostre(“Informe o numero de aulas ministradas:”);
 	Leia (totAulas);
 	Mostre(“Informe o valor da hora/aula:”);
   	Leia (valorHoraAula);
  	Mostre(“Informe o percentual de desconto INSS:”);
 	Leia (descInss);
	salBruto= totAulas*valorHoraAula;
 	salLiq= salBruto – (salBruto*(descInss/100));
 	Mostre(“Salario liquido do professor=”, salLiq);
Fim.*/