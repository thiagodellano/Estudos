#include <stdio.h>

int main() {
    float C, f;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &C);

    f = (C * 9 / 5) + 32;
    printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit.\n", C, f);
    
    return 0;
}