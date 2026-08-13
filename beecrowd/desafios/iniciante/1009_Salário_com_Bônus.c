/*
 ==========================================
          ANOTAÇÕES DO PROJETO
 ==========================================
  
  Autor:   victor rafael dantas de araujo
  Data:    13/08/2026
  
  Descrição:
    Este programa faz a soma do sálario do mês + 15 porcento das vendas.
    
  Anotações importantes:
    - entendendo estruturas.
    - observar como funciona igual uma escada a chamada de estrutura dentro de outra.
    - porcetagem
 ==========================================
 */

#include <stdio.h>

#define MAX_CARACTERISTICAS 3
//-----------------
typedef struct {
    char funcionario_nome[50];// caracateristica 0     | nome do funcionario
    double salario_fixo;      // caracateristica 1     | salario fixo
    double vendas; // caracateristica 2     | sálario final
    double salario_do_mes;
} caracteristicas;
//-----------------
typedef struct {
    caracteristicas estatisticas; // conceito de estrutura dentro de estrutura
} funcionario;

int main (void) {
    funcionario pessoa;
    scanf("%s %lf %lf", &pessoa.estatisticas.funcionario_nome,  //| ADICIONANDO DADOS
                       &pessoa.estatisticas.salario_fixo,       //|       A
                       &pessoa.estatisticas.vendas );          //|   ESTRUTURA

                       // SALARIO DO MÊS + (15% das vendas)
    pessoa.estatisticas.salario_do_mes = pessoa.estatisticas.salario_fixo + (pessoa.estatisticas.vendas * 0.15);
    printf ("TOTAL = R$ %0.2lf\n", pessoa.estatisticas.salario_do_mes);

}