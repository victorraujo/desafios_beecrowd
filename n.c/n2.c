/*
DESCOBRE O TAMANHO DO ARRAYA SOZINHO

formula = total / total de 1

*/



#include <stdio.h>
#include <stdbool.h>
int main(void) {
    int jogador[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 0}; // numeros guardados


    int *pointer = NULL; // ponteiro 0X00
    int arraya_tamanho = sizeof(jogador) / sizeof(jogador[0]); // tamanho = total_bytes / total_de_bytes_de_um_elemento 

    while (true) {
        
        int usuario;
        do {
            if (scanf("%i", &usuario) == 0) { getchar() != '\n'; }
            
        } while (usuario > arraya_tamanho || usuario <= 0);
        if (usuario == 999) { break; }
        usuario = usuario - 1;

        
        pointer = &jogador[usuario];
        
        printf("jogador apontado -> [%i] endereço: %p\n", *pointer, pointer);
    }
 

    return 0;
}