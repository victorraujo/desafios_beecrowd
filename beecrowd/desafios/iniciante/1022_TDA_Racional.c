// ensinar o computador fração

#include <stdio.h>
#include <stdlib.h> // função (abs)

typedef int fracao;
typedef int calculado;
typedef struct 
{
    fracao numerador[2];
    fracao denominador[2];

    calculado num_bruto;
    calculado de_bruto;
    calculado num_simplificado;
    calculado num_simplificado
} status_fracao;

void calcular(status_fracao *fracao, char operacao)
{
    if (operacao == '+')
    {
        fracao->num_bruto = (fracao->numerador[0] * fracao->denominador[1] + fracao->numerador[1] * fracao->denominador[0]);
        fracao->de_bruto = (fracao->denominador[0] * fracao->denominador[1]);
    }
    if (operacao == '-')
    {
        fracao->num_bruto = (fracao->numerador[0] * fracao->denominador[1] - fracao->numerador[1] * fracao->denominador[0]);
        fracao->de_bruto = (fracao->denominador[0] * fracao->numerador[1]);
    }
    if (operacao == '*')
    {
        fracao->num_bruto = (fracao->numerador[0] * fracao->numerador[1]);
        fracao->de_bruto = (fracao->denominador[0] * fracao->denominador[1]);
    }
    if (operacao == '/')
    {
        fracao->num_bruto = (fracao->numerador[0] * fracao->denominador[1]);
        fracao->de_bruto = (fracao->numerador[1] * fracao->denominador[0]);
    }
    
}

int calcular_mdc(int a, int b) // numerador / denominador
{
    while ( b !=)
}
int main(void)
{
    int testes;
   
    scanf("%d", &testes);
    
    for(int i = 0; i < testes; i++)
    {
        status_fracao fracao; // duas fracao
        char  barra1, barra2, op;
        scanf("%d %c %d %c %d %c %d", &fracao.numerador[0], &barra1, &fracao.denominador[0], &op,
        &fracao.numerador[1], &barra2, &fracao.denominador[1]);

        calcular(&fracao, op);

        
    }
}