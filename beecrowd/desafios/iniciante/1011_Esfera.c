/*
 ==========================================
          ANOTAÇÕES DO PROJETO
 ==========================================
  
  Autor:   Victor Rafael Dantas de Araujo
  Data:    não finalizado.
  
  Descrição:
    calculando tamanho do raio.
    
  Anotações importantes:
    - 
    - 
    - 
 ==========================================
 */
#include <stdio.h>
#include <math.h>

#define PI 3.14159 // valor de PI

int main(void)
{
    double raio, volume; // raio e oq vamos pegar e o resultado e volume

    scanf("%lf", &raio);   // pegar o raio da bola

        //     FÓRMULA
    volume = (4.0/3) * PI * raio * raio * raio;

    printf("VOLUME = %.3lf\n", volume); // saída do resultado
    return 0;

}