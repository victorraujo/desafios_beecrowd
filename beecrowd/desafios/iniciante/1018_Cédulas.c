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
    int valor_lido;
    
    scanf("%d", &cedula);
    
    
    dinheiro.cem = cedula / 100;     //|  100
    cedula = cedula % 100;           //| REAIS

    dinheiro.cinquenta = cedula / 50;               //|  50
    cedula = cedula % 50;// a sobra da cedula % 100 //| REAIS

    dinheiro.vinte = cedula / 20;    //|  20
    cedula = cedula % 20;            //| REAIS

    dinheiro.dez = cedula / 10;      //|  10
    cedula = cedula % 10;            //| REAIS

    dinheiro.cinco = cedula / 5;     //|  5
    cedula = cedula % 5;             //| REAIS

    dinheiro.dois = cedula / 2;      //|  2
    cedula = cedula % 2;             //| REAIS

    dinheiro.um = cedula / 1;        //|  1
    cedula = cedula % 1;             //| REAIS


    // display
     printf("%d", valor_lido);
    printf("%d nota(s) de R$ 100,00\n", dinheiro.cem);
    printf("%d nota(s) de R$ 50,00\n", dinheiro.cinquenta);
    printf("%d nota(s) de R$ 20,00\n", dinheiro.vinte);
    printf("%d nota(s) de R$ 10,00\n", dinheiro.dez);
    printf("%d nota(s) de R$ 5,00\n", dinheiro.cinco);
    printf("%d nota(s) de R$ 2,00\n", dinheiro.dois);
    printf("%d nota(s) de R$ 1,00\n", dinheiro.um);

    return 0;
}
