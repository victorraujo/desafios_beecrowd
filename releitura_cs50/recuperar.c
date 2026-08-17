#include <stdio.h>
#include <stdint.h> // Inclui os tipos de tamanho fixo como uint8_t
int main(int argc, char *argv[])
{
    int bytes_jpeg[] = {0xff, 0xd8, 0xff};
    int contador_Fotos = 0;
    //relatorio
    FILE *relatorio = fopen("relatorio.txt", "a");
    if (argc != 2)
    {
        fprintf(relatorio, "maximo excendido.\n");
        return 1;
    }
    if (argv == NULL)
    {
        fprintf(relatorio, "falhou pra achar\n"); 
        return 1;
    }
    fprintf(relatorio, "passo 1 ok\n"); 

    uint8_t buffer[512];

    FILE *arquivo_usuario = fopen(argv[1], "r");
    if (argc > 2)
    { 
        fprintf(relatorio, "falhou pra achar\n"); 
        return 1;
    }
    FILE *foto = NULL;
    while(fread(buffer, 512, 1, arquivo_usuario) == 1)
    {
        // bit a bit || o primeiro espalha o segundo limpa
        if (buffer[0] == bytes_jpeg[0] && buffer[1] == bytes_jpeg[1] && buffer[2] == bytes_jpeg[2] &&
        (buffer[3] & 0xf0) == 0xe0)
        {
            if (foto != NULL)
            {
                fclose(foto);
            }
            char promt_Text[8];

            sprintf(promt_Text, "%03i_png", contador_Fotos);
            foto = fopen(promt_Text, "w");
            contador_Fotos++;
        }
        if (foto != NULL)
        {
            fwrite(buffer, 512, 1, foto);
        }
    }
    if (foto == NULL)
    {
        fclose(foto);
    }
    return 0;


}