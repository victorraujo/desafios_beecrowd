/*
 ==========================================
          ANOTAÇÕES DO PROJETO
 ==========================================
 
  Autor:   Victor Rafael Dantas de Araújo
  Data:     não finalizado.
 
  Descrição:
    
   
  Anotações importantes:
    - 
    - 
    - 

 ==========================================
 */

#include <stdio.h>


typedef int nota; 
typedef struct {
    nota cem;
    nota cinquenta;
    nota vinte;
    nota dez;
    nota cinco;
    nota dois;
    nota um;
} status_dinheiro; // tipo de cedulas


zeramento(status_dinheiro *dinheiro)
{
    dinheiro -> cem = 0;
    dinheiro -> cinquenta = 0;
    dinheiro -> vinte = 0;
    dinheiro -> dez = 0;
    dinheiro -> dez = 0;
    dinheiro -> cinco = 0;
    dinheiro -> dois = 0;
    dinheiro -> um = 0;
}
 
int main(void)
{
    
    status_dinheiro dinheiro;
    zeramento(&dinheiro);
    int sobra = 0;
    int cedula = 0;
    
    scanf("%d", &cedula);

    dinheiro.cem = cedula / 100;
    dinheiro.cinquenta = cedula / 50;
    dinheiro.vinte = cedula / 20;

    // dinheiro.cem = cedula % sobra;

    printf("%d\n", dinheiro.cem);
    printf("%d\n", dinheiro.cinquenta);
    printf("%d\n", dinheiro.vinte);
    printf("%d\n", dinheiro.cem);
    



}

