#include <stdio.h>

int main() {
    float nota;
    
    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    if (nota < 0 || nota > 10) {
        printf("Nota inválida. A nota deve estar entre 0 e 10.\n");
    } else if (nota >= 7) {
        printf("Aluno aprovado.\n");
    } else if (nota >= 5) {
        printf("Aluno em recuperação.\n");
    } else {
        printf("Aluno reprovado.\n");
    }

    return 0;
}