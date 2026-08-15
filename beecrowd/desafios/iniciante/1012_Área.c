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

void triangulo(status_usuario *usuario)
{
    //     (BASE VEZES ALTURA DIVIDIDO POR 2)
    usuario->area.triangulo = usuario->valores.a * usuario->valores.c / 2.0;
    return;
}

void circulo(status_usuario *usuario)
{
    // Lembrando que o raio aqui é o C!
    usuario->area.circulo = PI * usuario->valores.c *  usuario->valores.c;
}
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

