/*
 ==========================================
          ANOTAÇÕES DO PROJETO
 ==========================================
  
  Autor:   Victor Rafael Dantas de Araujo
  Data:    não finalizado
  
  Descrição:
    Descubra a área.
    
  Anotações importantes:
    - ÄREAS A DESCUBRIR:
    - Descubra TRIANGULO
    - Descubra CIRCULO
    - Descubra TRAPEZIO
    - Descubra QUADRADO
    - Descubra RETANGULO
 ==========================================
 */
#include <stdio.h>

#define PI 3.14159 // Valor de PI

// Grupo de entrada do usuario
typedef struct {
    double a; 
    double b; 
    double c;
} dados_valores;

// Grupo de resultados de areas
typedef struct {
    double triangulo;
    double circulo;
    double trapezio;
    double quadrado;
    double retangulo;
} dados_area;

// Grupo de painel do usuario
typedef struct {
    dados_valores valores;
    dados_area area;

} status_usuario;

// Funções de formulas

void triangulo(status_usuario *usuario)
{
    //     (BASE VEZES ALTURA DIVIDIDO POR 2)
    usuario->area.triangulo = usuario->valores.a * usuario->valores.c / 2.0;
}

void circulo(status_usuario *usuario)
{
    // Lembrando que o raio aqui é o C!
    usuario->area.circulo = PI * usuario->valores.c *  usuario->valores.c;
}

void trapezio(status_usuario *usuario)
{
    // A área do trapézio que tem A e B por bases e C por altura.
    usuario->area.trapezio = (usuario->valores.a + usuario->valores.b) * usuario->valores.c;
}

void quadrado(status_usuario *usuario)
{
    //         A área do quadrado que tem lado B
    usuario->area.quadrado = usuario->valores.b * usuario->valores.b;
}

void retangulo(status_usuario *usuario)
{
    //        A área do retângulo que tem lados A e B.
    usuario->area.quadrado = usuario->valores.a + usuario->valores.b;
}
void display(status_usuario usuario)
{

    //    FÓRMULAS DISPLAYS
    printf("TRIANGULO: %.3lf\n", usuario.area.triangulo);
    printf("CIRCULO: %.3lf\n", usuario.area.circulo);
    printf("TRAPEZIO: %.3lf\n", usuario.area.trapezio);
    printf("QUADRADO:  %.3lf\n", usuario.area.quadrado);
    printf("RETANGULO: %.3lf\n", usuario.area.retangulo);
}
int main(void)
{
    status_usuario usuario;

    scanf("%lf %lf %lf", &usuario.valores.a, &usuario.valores.b, &usuario.valores.c);

    triangulo(&usuario);

    circulo(&usuario);

    trapezio(&usuario);

    quadrado(&usuario);

    retangulo(&usuario);
    
    display(usuario);
    return 0;
}