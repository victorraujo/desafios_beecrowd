#include <stdio.h>


#define MAXIMUM_NUMBER 4

typedef struct 
{
    int valores[4];
} number; // estrutura


int main(void) {
     number numbers;

    for (int i = 0; i < MAXIMUM_NUMBER; i++)
    {
        scanf("%i", &numbers.valores[i]); // peço 4 numeros
    }
    //                                  FORMULA DA DIFERENÇA
    int diferenca = (numbers.valores[0] * numbers.valores[1] - numbers.valores[2] * numbers.valores[3]);

    printf("DIFERENCA = %i\n", diferenca);
}