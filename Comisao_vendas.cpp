#include <iostream>
#include <stdio.h>

int main(int argc, char ** argv) {

    float comi, porc;
    int venda;

    printf("Digite o valor da venda: ");
    scanf("%d",&venda);
    printf("\nDigite a porcentaguem da comisao: ");
    scanf("%f",&comi);

    porc = venda * (comi/100);

    printf("O valor da Comisao: %.1f",porc);

    return 0;
}
//
// Created by lucas on 09/03/2024.
//
