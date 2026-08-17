/*
 ==========================================
          ANOTAÇÕES DO PROJETO
 ==========================================
  
  Autor:   Victor Rafael Dantas de Araujo
  Data:    não finalizado.
  
  Descrição:
    calcular consumo medio de um automóvel 
    
  Anotações importantes:
    - 
    - 
    - 

 ==========================================
 */
#include <stdio.h>


typedef struct 
{
    int distancia_total; // x representa quantos km percorreu
    double combustivel;  // y representa valor gasto
    double media_gasta;  // media
} automovel;

 int main(void)
 {
    automovel carro;
    scanf("%d %lf", &carro.distancia_total, &carro.combustivel);

    carro.media_gasta = (carro.distancia_total + carro.combustivel) /2.0;

    printf("%lf km/l\n", carro.media_gasta);
    return 0;
 }