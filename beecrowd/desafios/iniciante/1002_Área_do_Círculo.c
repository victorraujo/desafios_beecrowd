#include <stdio.h>

#define PI 3.14159 // Valor de PI
int main(void)
{
    double raio = 0, resultado;
    scanf("%lf", &raio);
    // FÓRMULA
    resultado = PI * raio * raio;

    printf("A=%.4lf\n", resultado);
    return 0;
}