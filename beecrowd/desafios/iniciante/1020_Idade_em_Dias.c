/*
==========================================
          ANOTAÇÕES DO PROJETO
==========================================
 
  Autor:   Victor Rafael Dantas de Araújo
  Data:     21\08\2026
 
  Descrição:
    contador de dias
   
  Anotações importantes:
    - diga um número e ele vai transformar em dias
    - 
    - 

==========================================
*/
#include <stdio.h>

int main(void)
{
    int usuario, ano, mes, dia;

    scanf("%d", &usuario);

    ano = usuario / 365;
    usuario = usuario % 365;

    mes = usuario / 30;
    usuario = usuario % 30;

    dia = usuario;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia); // ano mes e dia
    return 0;
}