/*
==========================================
          ANOTAÇÕES DO PROJETO
==========================================
 
  Autor:   Victor Rafael Dantas de Araújo
  Data:     21/08/2026
 
  Descrição:
    contador de dinheiro (nota e moeda).
   
  Anotações importantes:
    - diga o valor.
    - usei a biblioteca math.h para calcular o resto com pontos flutuantes.
    - a função da math que usei chama-se (fmodf).

==========================================
*/
#include <stdio.h>
#include <math.h> // fmodf calcular dois pontos flutuantes

int main(void)
{
    float usuario;
    float cem, ciquenta, vinte, dez, cinco, dois;
    float um, cinquenta_centavos, vinte_cinco_centavos, dez_centavos, cinco_centavos, um_centavo;

    scanf("%f", &usuario);

    cem = usuario / 100;
    usuario = fmodf(usuario, 100.00f); // fmodf nome da funcao que faz resto entre pontos flutuantes. 


    ciquenta = usuario / 50;
    usuario = fmodf(usuario, 50.00f); // esse f no final significa que e float senão o c acha que e double.

    vinte = usuario / 20;
    usuario = fmodf(usuario, 20.00f);

    dez = usuario / 10;
    usuario = fmodf(usuario, 10.00f);

    cinco = usuario / 5;
    usuario = fmodf(usuario, 5.00f);

    vinte = usuario / 2;
    usuario = fmodf(usuario, 2.00f);

    // MOEDAS AGORA
    um = usuario / 1;
    usuario = fmodf(usuario, 1.00f);

    cinquenta_centavos = usuario / 0.50;
    usuario = fmodf(usuario, 0.50f);

    vinte_cinco_centavos = usuario / 0.25;
    usuario = fmodf(usuario, 0.25f);

    dez_centavos = usuario / 0.10;
    usuario = fmodf(usuario, 0.10f);

    cinco_centavos = usuario / 0.10;
    usuario = fmodf(usuario, 0.05f);

    um_centavo = usuario; // oq sobrar e centavo

    printf("NOTAS:\n"
           "%.2f nota(s) de R$ 100.00\n"
           "%.2f nota(s) de R$ 50.00\n"
           "%.2f nota(s) de R$ 20.00\n"
           "%.2f nota(s) de R$ 10.00\n"
           "%.2f nota(s) de R$ 5.00\n"
           "%.2f nota(s) de R$ 2.00\n"
           
           "MOEDAS:\n"
           "%.2f nota(s) de R$ 1.00\n"
           "%.2f nota(s) de R$ 0.50\n"
           "%.2f nota(s) de R$ 0.25\n"
           "%.2f nota(s) de R$ 0.10\n"
           "%.2f nota(s) de R$ 0.05\n"
           "%.2f nota(s) de R$ 0.01\n", 
           cem, ciquenta, vinte, dez, cinco, dois, um, cinquenta_centavos, vinte_cinco_centavos,
           dez_centavos, cinco_centavos, um_centavo);
    return 0;
}