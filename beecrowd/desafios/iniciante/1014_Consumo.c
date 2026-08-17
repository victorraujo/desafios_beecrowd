/*
 ==========================================
          ANOTAÇÕES DO PROJETO
 ==========================================
  
  Autor:   Victor Rafael Dantas de Araujo
  Data:    16/08/2026
  
  Descrição:
    Dalcular consumo medio de um automóvel 
    
  Anotações importantes:
    - Dificultei um pouco a parte de imprimir o texto para aprender bytes
    - Prendendo sprintf e snprintf e segurança de bytes
    - 

 ==========================================
 */
#include <stdio.h>
#include <stdlib.h> // malloc

#define BYTE_NULO 1
typedef struct 
{
    int distancia_total; // x representa quantos km percorreu
    double combustivel;  // y representa valor gasto
    double media_gasta;  // media
} automovel;

int main(void)
{
    automovel carro;
    scanf("%d %lf", &carro.distancia_total, &carro.combustivel);

    carro.media_gasta = (carro.distancia_total / carro.combustivel);

    //            snprintf( ONDE_GUARDAR , LIMITE_DE_BYTES , "FORMATO" , VARIAVEL );
    // ele retorna o numero de caracteres da variavel.
    int tamanho = snprintf(NULL, 0, "%.3lf km/l", carro.media_gasta) + BYTE_NULO;

    //      CRIANDO VARIAVEL DINAMICA
    char *menssagem = malloc(tamanho);
    if (menssagem == NULL) { return 1; } // CLÁSULA DE GUARDA

    //      JEITO MAIS PROFISSIONAL DE CRIAR UMA MENSSAGEM
    snprintf(menssagem, tamanho, "%.3lf km/l", carro.media_gasta);

    printf("%s\n", menssagem);

    free(menssagem);
    return 0;
}