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
    - usei a mutiplicação para transformar em inteiro e usei +0.5 para caso arredondar decimais com 99
    - 

==========================================
*/
#include <stdio.h>

int main(void)
{
    double valor_usuario;
    int usuario, cem, ciquenta, vinte, dez, cinco, dois;
    int um, cinquenta_centavos, vinte_cinco_centavos, dez_centavos, cinco_centavos, um_centavo;

    scanf("%lf", &valor_usuario);         //0.5 -> para arredondar caso alguma decimal fosse 99
    usuario = (int) (valor_usuario * 100.0 +0.5); // numeros decimais viram int (576.73 - > 57673)

    cem = usuario / 10000;  // ja que mutipliquei pra 100 entao devemos dividir pelos numero dos zero das casas decimais
    usuario = usuario % 10000;

    ciquenta = usuario / 5000; // duas decimal entao mais dois zeros por causa da mutiplicação
    usuario = usuario % 5000; 

    vinte = usuario / 2000;
    usuario = usuario % 2000;

    dez = usuario / 1000;
    usuario = usuario % 1000;

    cinco = usuario / 500;
    usuario = usuario % 500;

    dois = usuario / 200;
    usuario = usuario % 200;

    // MOEDAS AGORA
    um = usuario / 100;
    usuario = usuario % 100;

    cinquenta_centavos = usuario / 50;
    usuario = usuario % 50;

    vinte_cinco_centavos = usuario / 25;
    usuario = usuario % 25;

    dez_centavos = usuario / 10;
    usuario = usuario % 10;

    cinco_centavos = usuario / 5;
    usuario = usuario % 5;

    um_centavo = usuario / 1;

    um_centavo = usuario; // oq sobrar e centavo

    printf("NOTAS:\n"
           "%d nota(s) de R$ 100.00\n"
           "%d nota(s) de R$ 50.00\n"
           "%d nota(s) de R$ 20.00\n"
           "%d nota(s) de R$ 10.00\n"
           "%d nota(s) de R$ 5.00\n"
           "%d nota(s) de R$ 2.00\n"
           
           "MOEDAS:\n"
           "%d moeda(s) de R$ 1.00\n"
           "%d moeda(s) de R$ 0.50\n"
           "%d moeda(s) de R$ 0.25\n"
           "%d moeda(s) de R$ 0.10\n"
           "%d moeda(s) de R$ 0.05\n"
           "%d moeda(s) de R$ 0.01\n", 
           cem, ciquenta, vinte, dez, cinco, dois, um, cinquenta_centavos, vinte_cinco_centavos,
           dez_centavos, cinco_centavos, um_centavo);
    return 0;
}