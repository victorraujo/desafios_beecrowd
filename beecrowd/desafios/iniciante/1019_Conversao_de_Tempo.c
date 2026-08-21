/*
 ==========================================
          ANOTAÇÕES DO PROJETO
 ==========================================
 
  Autor:   Victor Rafael Dantas de Araújo
  Data:     20/08/2026
 
  Descrição:
    conversão de número para tempo(horas)
   
  Anotações importantes:
    - digite o número e o programa vai converter em horas(horario)
    - 
    - 

 ==========================================
 */
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int horas, minutos, segundos;

    horas = n / 3600;
    n = n % 3600; // salva a sobra

    minutos = n / 60;
    n = n % 60;

    segundos = n; // operador ja deixou em forma de segundos


    printf("%d:%d:%d\n", horas, minutos, segundos);
    return 0;
}