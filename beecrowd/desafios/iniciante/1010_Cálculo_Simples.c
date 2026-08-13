/*
 ==========================================
          ANOTAÇÕES DO PROJETO
 ==========================================
  
  Autor:   victor rafael dantas de araujo
  Data:    não finalizado
  
  Descrição:
    ...
    
  Anotações importantes:
    - uma soma simples
    - compliquei um pouco usando ponteiro para treinar lógica
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
        scanf("%i, %i, %lf", ponteiro->codigo, ponteiro->objetos, ponteiro->valor);

        ponteiro = NULL; // zeramento do ponteiro (endereço)
    }
    //                       PRIMEIRO PRODUTO + SEGUNDO PRODUTO( FORMULA )
    double soma_total = (produto[0].valor * produto[0].objetos) + (produto[1].valor * produto[1].objetos);
    
    printf("VALOR A PAGAR: R$ %lf", soma_total);
    return 0;
}