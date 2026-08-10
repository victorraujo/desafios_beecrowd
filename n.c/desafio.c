#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    int a = 0, b = 0;
    bool ok = false;
    do
    {
        int leitura = scanf("%i%i", &a, &b);

        if (leitura == 2) { ok = true; }
        else
        {
            while (getchar() != '\n');
        }

    } while (ok != true);

    printf("X = %i\n", a + b);


    return 0;
}
