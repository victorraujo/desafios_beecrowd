/*
 ==========================================
          ANOTAÇÕES DO PROJETO
 ==========================================
  
  Autor:   Victor Rafael Dantas de Araujo
  Data:    não finalizado
  
  Descrição:
    descubra a área.
    
  Anotações importantes:
    - ÄREAS A DESCUBRIR:
    - descubra TRIANGULO
    - descubra CIRCULO
    - descubra TRAPEZIO
    - descubra QUADRADO
    - descubra RETANGULO
 ==========================================
 */
#include <stdio.h>

#define PI 3.14159 // valor de PI

// grupo de entrada do usuario
typedef struct {
    double a;
    double b;
    double c;
} dados_valores;

// grupo de resultados de areas
typedef struct {
    double triangulo;
    double circulo;
    double trapezio;
    double quadrado;
    double retangulo;
} dados_area;

// grupo de painel do usuario
typedef struct {
    dados_valores valores;
    dados_area area;

} status_usuario;

// funções de formulas

triangulo(status_usuario *usuario);
circulo(status_usuario *usuario);
trapezio(status_usuario *usuario);
quadrado(status_usuario *usuario);
display(status_usuario usuario);
int main(void)
{
    status_usuario usuario;

    scanf("%lf %lf %lf", &usuario.valores);

    triangulo(&usuario);

    circulo(&usuario);

    trapezio(&usuario);

    quadrado(&usuario);

    retangulo(&usuario);
    
    display(usuario);
    

    return 0;


    

}