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


void zeramento(status_dinheiro *dinheiro)
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
    cedula = cedula % 100;

    dinheiro.cinquenta = cedula / 50;
    cedula = cedula % 50;

    dinheiro.cem = cedula / 20;
    cedula = cedula % 20;


    // dinheiro.cem = cedula % sobra;

    printf("%d nota(s) de R$ 100,00\n", dinheiro.cem);
    printf("%d nota(s) de R$ 50,00\n", dinheiro.cinquenta);
    printf("%d nota(s) de R$ 20,00\n", dinheiro.vinte);
    printf("%d nota(s) de R$ 10,00\n", dinheiro.dez);
    



}

