/*
==========================================
          ANOTAÇÕES DO PROJETO
==========================================
 
  Autor:   Victor Rafael Dantas de Araújo
  Data:     25/08/2026
 
  Descrição:
    calcula de fração (tda racional)
   
  Anotações importantes:
    - sempre verifique de botar quantos calculos vc quer(sera calculado um por vez) 
    - aprendendo mdc
    - aprendendo a usar scanf melhor
    - 

==========================================
*/

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
    calculado num_simplificado; // numerador
    calculado de_simplificado;  // denominador
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
        fracao->de_bruto = (fracao->denominador[0] * fracao->denominador[1]);
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
    int resto = 0;
    while ( b != 0)
    {
        resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

void simplificacao(status_fracao *fracao)
{
    int mdc = calcular_mdc(abs(fracao->num_bruto), fracao->de_bruto); // pra pegar o minimo mutiplo comum de mdc

    fracao->num_simplificado = fracao->num_bruto / mdc; // so dividir agora
    fracao->de_simplificado = fracao->de_bruto / mdc;
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
        simplificacao(&fracao);

        printf("%d/%d = %d/%d\n", fracao.num_bruto, fracao.de_bruto, fracao.num_simplificado, fracao.de_simplificado);
    }
    return 0;
}