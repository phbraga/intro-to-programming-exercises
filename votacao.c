//
// Created by Pedro Magalhães on 9/2/19.
//

#include <stdio.h>

int main() {

    int n_votos_cand1 = 0, n_votos_cand2 = 0, n_votos_cand3 = 0, n_votos = 0, n_max_votos, voto;
    float p_votos_cand1 = 0, p_votos_cand2 = 0, p_votos_cand3 = 0;
    char continuar = 's';

    do {
        do {
            printf("Digite o numero do seu candidato: ");
            scanf("%d", &voto);

            if (voto == 1) {
                ++n_votos_cand1;
            } else if (voto == 2) {
                ++n_votos_cand2;
            } else if (voto == 3) {
                ++n_votos_cand3;
            } else {
                printf("Voto invalido. Vote novamente!\n");
                continue;
            }

            n_votos++;

        } while (voto < 1 || voto > 3);

        printf("Receber os dados do proximo eleitor (s/n)?: ");
        fflush(stdin);
        scanf(" %c", &continuar);

    } while (continuar == 's');

    p_votos_cand1 = ((float) n_votos_cand1) / n_votos;
    p_votos_cand2 = ((float) n_votos_cand2) / n_votos;
    p_votos_cand3 = ((float) n_votos_cand3) / n_votos;

    printf("Candidato 1: %.2f%%\n", 100 * p_votos_cand1);
    printf("Candidato 2: %.2f%%\n", 100 * p_votos_cand2);
    printf("Candidato 3: %.2f%%\n", 100 * p_votos_cand3);

    if (p_votos_cand1 > 0.5) {
        printf("Vencedor no primeiro turno: 1");
    } else if (p_votos_cand2 > 0.5) {
        printf("Vencedor no primeiro turno: 2");
    } else if (p_votos_cand3 > 0.5) {
        printf("Vencedor no primeiro turno: 3");
    } else {
        printf("Segundo turno");
    }

    return 0;
}