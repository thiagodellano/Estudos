#include <stdio.h>

int main() {
    int idade;
    float nota;
    char letra;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua nota: ");
    scanf("%f", &nota);

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    printf("Você digitou: idade = %d, nota = %.1f, letra = %c\n", idade, nota, letra);

    return 0;
}