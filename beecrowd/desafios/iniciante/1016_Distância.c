/*
 ==========================================
          ANOTAÇÕES DO PROJETO
 ==========================================
 
  Autor:   Victor Rafael Dantas de Araújo
  Data:     não finalizado.
 
  Descrição: 
    Dois carros (X e Y) partem em uma mesma direção. 
    O carro X sai com velocidade constante de 60 Km/h
    e o carro Y sai com velocidade constante de 90 Km/h.

    Em uma hora (60 minutos) o carro Y consegue se distanciar 30 quilômetros do carro X, ou seja, 
    consegue se afastar um quilômetro a cada 2 minutos.
    Leia a distância (em Km) e calcule quanto tempo leva (em minutos) para o carro Y tomar essa distância do outro carro.


   
  Anotações importantes:
    - formula basica
    - 
    - 

 ==========================================
 */

#include <stdio.h>
#include <math.h>
int formula(int km)
{
    // dobramento
    km = km * 2;
    return km;
}

int main(void)
{
    int distancia_km;
    scanf("%d", &distancia_km);

    // 1 km a cada 2 minuto ou seja
    // 1 km == 2 minutos ou seja apenas dobrar o número que vier

    distancia_km = formula(distancia_km);
    printf("%d minutos", distancia_km);

    return 0;
}