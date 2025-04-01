#include <stdio.h>

int main()
{
    int torre = 5, bispo = 5, rainha = 8, cavalo = 1;

    // Movimento Torre
    printf("Movimento Torre \n");
    for (torre; torre > 0; torre--)
    {
        printf("Direita \n");
    }

    // Movimento Bispo
    printf("Movimento Bispo \n");
    while (bispo > 0)
    {
        printf("Cima, Direita \n");
        bispo--;
    }

    // Movimento Rainha
    printf("Movimento Rainha \n");
    do
    {
        printf("Esquerda \n");
        rainha--;
    } while (rainha > 0);

    // Movimento Cavalo
    printf("Movimento Cavalo \n");
    for (cavalo; cavalo > 0; cavalo--)
    {
        int movimento = 2;
        do
        {
            printf("Baixo \n");
            movimento--;
        } while (movimento > 0);
        printf("Esquerda \n");
    }
}