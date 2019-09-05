//
// Created by Pedro Magalhães on 9/2/19.
//

#include <stdio.h>

int main() {
    int idade, total = 0, maxIdade = 0, totalFem = 0;
    float renda, totalRenda = 0;
    char sexo;


    while(1) {
        printf("Digite a idade: ");
        scanf("%d", &idade);
        if (idade < 0) {
            break;
        }

        printf("Digite a renda: ");
        scanf("%f", &renda);

        do {
            printf("Digite o sexo: ");
            fflush(stdin);
            scanf(" %c", &sexo);
        } while(sexo != 'M' && sexo != 'F');

        total++;

        if(sexo == 'F'){
            totalFem++;
        }

        if(maxIdade < idade){
            maxIdade = idade;
        }

        totalRenda += renda;
    }

    if (total > 0) {
        printf("O total de pessoas cadastradas eh de %d\n", total);
        printf("A proporcao de pessoas do sexo feminino eh de %.2f\n", ((float)totalFem)/total);
        printf("A pessoa mais velha da cidade tem %d anos\n", maxIdade);
        printf("A media de renda na cidade eh de %.2f\n", (totalRenda / total));
    } else {
        printf("Nenhuma pessoa foi cadastrada");
    }

    return 0;
}