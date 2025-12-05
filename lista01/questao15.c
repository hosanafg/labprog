/*15. Desenvolva um programa que calcule o salario liquido de um professor. Para elaborar o programa,  ́e
necess ́ario possuir alguns dados, tais como o valor da hora aula, n ́umero de horas trabalhadas no mˆes e
percentual de desconto do INSS. Em primeiro lugar, deve-se estabelecer o seu sal ́ario bruto para fazer
o desconto e ter o valor do salario liquido. Obs.: o programa deve informar o salario bruto e salario
liquido do professor.*/

#include <stdio.h>
int main() {
    float haula,htrab,descinss,sbruto,sliq;

    printf("Qual o valor da hora-aula do professor?:  ");
    scanf("%f",&haula);

    printf("Quantas horas foram trabalhadas no mês?:  ");
    scanf("%f",&htrab);

    printf("Quanto é a taxa de desconto do INSS? (exemplo: desconto de 10% -> digitar apenas 10):  ");
    scanf("%f",&descinss);
    descinss=1-(descinss/100);

    sbruto=haula*htrab;
    sliq=sbruto*descinss;

    printf("Salário bruto: R$ %.2f reais\nSalário líquido: R$ %.2f reais",sbruto,sliq);
    return 0;
}