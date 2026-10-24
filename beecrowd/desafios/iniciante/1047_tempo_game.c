/*
==========================================
          ANOTAÇÕES DO PROJETO
==========================================
 
  Autor:   Victor Rafael Dantas de Araújo
  Data:    24/10/2026
 
  Descrição:
    conta horas jogadas em horas e minutos.
    desafio nivel 9 do beecrowd.
   
  Anotações importantes:
    - entrada: horas_inicial, minutos_inicial, horas_final, minutos_final;
    - formula: resultado = final - incial; (basico de fisica)
    - caso seja negativo some numero_negativo + 1 dia;
    - saida: tempo gasto.
==========================================
*/




#include <stdio.h>

int main(void)
{
  
    int hora_inicial   = 0;
    int minuto_inicial = 0;
    int hora_final     = 0;
    int minuto_final   = 0;

    scanf("%d %d %d %d",&hora_inicial, &minuto_inicial, &hora_final, &minuto_final);
    
    

    int min_inicial = (hora_inicial * 60) + minuto_inicial;
    int min_final = (hora_final * 60) + minuto_final;

    int diferenca = min_final - min_inicial;
    if (diferenca <= 0)
    {
        diferenca = diferenca + 1440;
    }
    int horas_resultado   = diferenca / 60;
    int minutos_resultado = diferenca % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas_resultado, minutos_resultado);

    return 0;
}