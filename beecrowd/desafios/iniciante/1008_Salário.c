/*
 ==========================================
          ANOTAÇÕES DO PROJETO
 ==========================================
  
  Autor:   victor rafael dantas de araujo
  Data:    10/08/2026
  
  Descrição:
    Este programa faz o calculo do salario do mês.
    
  Anotações importantes:
    - entendendo estruturas.
    - observar como funciona igual uma escada a chamada de estrutura dentro de outra.
 ==========================================
 */

#include <stdio.h>

#define MAX_CARACTERISTICAS 3
//-----------------
typedef struct {
    int funcionario;// caracateristica 0     | número do funcionário
    int horas;      // caracateristica 1     | horas trabalhadas 
    double salario; // caracateristica 2     | sálario por hora
} caracteristicas;
//-----------------
typedef struct {
    caracteristicas estatisticas; // conceito de estrutura dentro de estrutura
} funcionario;

int main (void) {
    funcionario pessoa;
    scanf("%i %i %lf", &pessoa.estatisticas.funcionario, //| ADICIONANDO DADOS
                       &pessoa.estatisticas.horas,       //|       A
                       &pessoa.estatisticas.salario );   //|   ESTRUTURA

                       // SALARIO DO MÊS
    double salario_mes = (pessoa.estatisticas.horas * pessoa.estatisticas.salario);

    printf ("NUMBER = %i\n", pessoa.estatisticas.funcionario);
    printf ("SALARY = U$ %0.2lf\n", salario_mes);

}