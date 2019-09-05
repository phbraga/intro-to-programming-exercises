//
// Created by Pedro Magalhães on 8/30/19.
//

#include <stdio.h>

int main() {

    int qtqCoxinhas = 0, qtdCroissants= 0, dias = 30, i;
    float fatDiaCoxinha = 0.0, fatDiaCroissants = 0.0, fatDia = 0.0;
    float fatTotalCoxinhas = 0.0, fatTotalCroissants = 0.0;
    float maiorFatDia = 0.0, menorFatDia = 0.0;

    for(i = 0 ; i < dias ; ++i) {
        printf("Vendas de coxinhas e croissants (dia %d). \n", (i + 1));

        do {
            printf("Digite a quantidade de coxinhas [0, 100]: ");
            scanf("%d", &qtqCoxinhas);
        } while(qtqCoxinhas < 0 || qtqCoxinhas > 100);

        do {
            printf("Digite a quantidade de croissants [0, 100]: ");
            scanf("%d", &qtdCroissants);
        } while(qtdCroissants < 0 || qtdCroissants > 100);

        fatDiaCoxinha = qtqCoxinhas * 4.0;
        fatDiaCroissants = qtdCroissants * 3.50;

        fatDia = fatDiaCoxinha + fatDiaCroissants;
        fatTotalCoxinhas += fatDiaCoxinha;
        fatTotalCroissants += fatDiaCroissants;

        if(maiorFatDia < fatDia) {
            maiorFatDia = fatDia;
        }

        if(menorFatDia > fatDia || i == 0) {
            menorFatDia = fatDia;
        }
    }

    printf("\nFaturamento total: %.2f \n", fatTotalCoxinhas + fatTotalCroissants);
    printf("Maior faturamento diario: %.2f\n", maiorFatDia);
    printf("Menor faturamento diario: %.2f\n", menorFatDia);

    if (fatTotalCoxinhas > fatTotalCroissants){
        printf("Maior faturamento foi com o item coxinha: %.2f \n", fatTotalCoxinhas);
    } else if(fatTotalCroissants > fatTotalCoxinhas){
        printf("Maior faturamento foi com o item croissant: %.2f \n", fatTotalCroissants);
    } else{
        printf("Faturamento dos itens investigados foram iguais: %.2f \n", fatTotalCoxinhas);
    }

    return 0;
}