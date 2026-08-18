/*
 ==========================================
          ANOTAÇÕES DO PROJETO
 ==========================================
 
  Autor:   Victor Rafael Dantas de Araújo
  Data:     17/08/2026
 
  Descrição:
    quantidade de litros percorrido
   
  Anotações importantes:
    - primeiro digite o tempo gasto na viagem em horas
    - segundo digite a velocidade media
    - 

 ==========================================
 */
#include <stdio.h>
#define doze_por_litro 12
int main(void)
{
    int tempo, velocidade_km;
    double distancia, gasolina_gasta;

    scanf("%d %d", &tempo, &velocidade_km);
    // formula para saber a distancia percorrida
    distancia = velocidade_km * tempo;

    // a cada 1 km ele gasta 12 de combustivel
    gasolina_gasta = distancia / doze_por_litro;

    printf("%.3lf\n", gasolina_gasta);

    return 0;
}