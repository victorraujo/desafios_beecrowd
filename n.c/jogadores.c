/* ELE DESCOBRE O TAMANHO DO ARRAYA SOZINHO E QUAL E O MAIOR NUMERO

*/



#include <stdio.h>
#include <stdbool.h>
int main(void) {
    int jogador[] = {1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12, 13, 14, 15, 0}; // numeros guardados


    int *pointer = NULL; // ponteiro 0X00

    int arraya_tamanho = sizeof(jogador) / sizeof(jogador[0]); // tamanho = total_bytes / total_de_bytes_de_um_elemento 

    for (int i = 0; i < arraya_tamanho; i++) {
        
        int pts = 0;             // pontos atual
        if (pts < jogador[i]) {  //pontos e menor que jogador atual?
            
            pointer = &jogador[i]; // ponteiro guarda o endereço
        }
    }
    printf("tamanho do arraya existente: [%i]\n", arraya_tamanho);
    printf("jogador apontado -> %i", *pointer);

    return 0;
}