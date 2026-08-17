/*
 ==========================================
          ANOTAÇÕES DO PROJETO
 ==========================================
 
  Autor:   Victor Rafael Dantas de Araújo
  Data:     17/08/2026
 
  Descrição:
    Analisar a distancia entre pontos. basicamente a distancia entre 2 "personagens"
   
  Anotações importantes:
    - Aprendendo a usar a biblioteca math.h
    - 
    - 

 ==========================================
 */

 
#include <stdio.h>
#include <math.h> // sqrt(raiz), pow(potencia)

int main(void)
{
    double x1,x2,y1,y2;

    scanf ("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);


    //           FÓRMULA
    double distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("%.4lf\n", distancia);
    return 0;
}