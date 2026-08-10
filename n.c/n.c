#include <stdio.h>
#include <stdbool.h>

#define MAX 3

int main(void) {
    int valores[MAX];
    int valores2[MAX];

    for (int i = 0; i < MAX; i++) {
        scanf("%i", &valores[i]);
    }
    for (int j = 0; j < MAX; j++)
    {
        bool houve_troca = false;

        for (int i = 0; i < MAX - 1; i++) {
            if (valores[i] > valores[i + 1])
            {
                int print = valores[i]; 

                valores[i] = valores[i + 1];
                valores[i + 1] = print;
                houve_troca = true;
            }
        }
        if (houve_troca == false) { break; };
    }
     printf("--------------------------------------\n");
     for (int i = 0; i < MAX; i++)
     {
        printf("%i\n", valores[i]);
     }
    return 0;
}