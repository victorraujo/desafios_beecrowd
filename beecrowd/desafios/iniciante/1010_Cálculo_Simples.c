/*
 ==========================================
          ANOTAÇÕES DO PROJETO
 ==========================================
  
  Autor:   Victor Rafael Dantas de Araujo
  Data:    13/08/2026
  
  Descrição:
    calculando valor a pagar da peça.
    
  Anotações importantes:
    - uma soma simples.
    - compliquei um pouco usando ponteiro para treinar lógica.
    - logica de ponteiros utilizando structs
 ==========================================
 */
#include <stdio.h>

#define MAX_OBJETOS 2

typedef int quantidade;

typedef struct {
    int codigo;
    quantidade objetos;
    double valor;
} status_produto;

int main(void)
{
    status_produto *ponteiro = NULL;
    status_produto produto[2];

    for (int i = 0; i < MAX_OBJETOS; i++)
    {
        ponteiro = &produto[i]; // ponteiro consegue o endereço
        scanf("%d %d %lf", &ponteiro->codigo, &ponteiro->objetos, &ponteiro->valor); // precisa do & porque está acessando o oq esta apontando

        ponteiro = NULL; // zeramento do ponteiro (endereço)
    }
    //                       PRIMEIRO PRODUTO + SEGUNDO PRODUTO( FORMULA )
    double soma_total = (produto[0].valor * produto[0].objetos) + (produto[1].valor * produto[1].objetos);
    
    printf("VALOR A PAGAR: R$ %.2lf\n", soma_total);
    return 0;
}