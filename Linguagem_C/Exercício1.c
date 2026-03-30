#include <stdio.h>

int main() {
    char nome[50];
    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Olá, %s! Bem-vindo ao mundo da programação em C.\n", nome);

    return 0;
}