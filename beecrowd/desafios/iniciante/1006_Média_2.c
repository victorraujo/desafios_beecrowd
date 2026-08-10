#include <stdio.h>


#define MAX 3 // notas maximas
#define A 0
#define B 1
#define C 2


typedef struct {
    double notas[MAX];
    double media; // media da formula
} status_aluno;

int main(void) 
{
    status_aluno aluno;
    scanf("%lf %lf %lf", &aluno.notas[A], &aluno.notas[B], &aluno.notas[C]);

    //             nota a tem peso 2  | nota b tem peso 3| nota c tem peso 5| nota vai de 0 a 10
    aluno.media = (aluno.notas[A] * 2 + aluno.notas[B] * 3 + aluno.notas[C] * 5) / 10.0;

    printf("MEDIA = %0.1lf\n", aluno.media);
}