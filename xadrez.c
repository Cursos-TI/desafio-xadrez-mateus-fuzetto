#include <stdio.h>

int main()
{
    int bispo = 5, rainha = 8;

    // Movimento Torre
    printf("Movimento Torre \n");
    for (int torre = 5; torre > 0; torre--)
    {
        printf("Direita \n");
    }

    printf("Movimento Bispo \n");
    // Movimento Bispo
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
}