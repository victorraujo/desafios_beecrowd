#include <stdio.h>

#define MAX_NOTAS 2
#define A 0
#define B 1


typedef struct {
    double notas[MAX_NOTAS];
    double media;
} aluno_status;

int main(void)
{
    aluno_status aluno;
    scanf("%lf %lf", &aluno.notas[A], &aluno.notas[B]);

    // media das duas notas || formula
    aluno.media = (aluno.notas[A] * 3.5 + aluno.notas[B] * 7.5) / 11.0;
    
    // saida
    printf("MEDIA = %0.5lf\n", aluno.media);

    return 0;
}