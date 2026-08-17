/*
 ==========================================
          ANOTAÇÕES DO PROJETO
 ==========================================
  
  Autor:   Victor Rafael Dantas de Araujo
  Data:    não finalizado.
  
  Descrição:
    Criar um programa pra dizer 
    qual número e maior utilizando a fórmula.
    
  Anotações importantes:
    - Usando função abs para retirar número negativo
    - fórmula para o maior número entre a e b 
    - Segunda fórmula para o maior número entre ab e c

 ==========================================
 */

#include <stdio.h>
#include <stdlib.h> // função (abs)
typedef struct
{
    int a;
    int b;
    int c;
    int eh_maior;
} numeros;


int main(void) 
{
    numeros usuario;
    scanf("%d %d %d", &usuario.a, &usuario.b, &usuario.c);

    // facilitadores de formulas
    int a = usuario.a;
    int b = usuario.b;
    int c = usuario.c;

    //   FÓRMULA PARA DESCUBRIR O MAIOR NÚMERO ENTRE A E B
    int maiorAB= ( a + b + abs(a - b)) / 2;

    //   FÓRMULA PARA DESCUBRIR O MAIOR NÚMERO ENTRE ab E c
    usuario.eh_maior = ( c + maiorAB + abs(c - maiorAB)) / 2;

    printf("%d eh o maior\n", usuario.eh_maior);
    return 0;
}