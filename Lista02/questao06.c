/*6. Escreva um programa que transforme o computador em uma urna eletronica para eleicao para pre-
sidente de um certo paıs, as quais concorrem os candidatos 5-Paulo e 7-Renata. Cada voto deve ser
dado pelo n ́umero do candidato, permitindo-se ainda o voto 0 para voto em branco. Qualquer voto
diferente dos ja citados  ́e considerado nulo; em qualquer situacao, o eleitor deve ser consultado 
quanto a confirmacao do seu voto. No final da elei̧cao o programa deve emitir um relatorio contendo 
as porcentagens de vota ̧c ̃ao de cada candidato, votos em branco, votos nulos e o candidato eleito. 
Obs.: O codigo para finalizar a urna (votacao) é o usuario digitar algum n ́umero negativo.*/

#include <stdio.h>
#define RENATA 7
#define PAULO 5
#define BRANCO 0

int main () {
    int n, conf;
    int r=0, p=0, b=0;

    do {
        printf("Em que candidato deseja votar? \n0-Branco\n5-Paulo\n7-Renata\nValores negativos (<0) para encerrar\nDigite seu voto: ");
        scanf("%d", &n);

        if (n<0) break;
        printf("Confirmar voto (1-SIM // 2-NÃO)?: ");
        scanf("%d", &conf);

        if (conf==1) {
            switch (n) {
                case RENATA:
                    r++;
                    break;
                case PAULO:
                    p++;
                    break;
                case BRANCO:
                    b++;
                    break;
                default:
                    printf("Voto inválido! Contado como branco.\n");
                    b++;
                    break;
            }
        }

    } while (1); 

    printf("\nResultado final:\n");
    printf("Renata: %d votos\n", r);
    printf("Paulo: %d votos\n", p);
    printf("Branco: %d votos\n", b);

    return 0;
}