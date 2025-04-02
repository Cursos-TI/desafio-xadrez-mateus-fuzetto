#include <stdio.h>

void movimentoTorre(int numero)
{
    if (numero > 0)
    {
        movimentoTorre(numero - 1);
        printf("Direita \n");
    }
}

void movimentoBispo(int numero)
{
    if (numero > 0)
    {
        movimentoBispo(numero - 1);
        printf("Cima, Direita \n");
    }
}

void movimentoRainha(int numero)
{
    if (numero > 0)
    {
        movimentoRainha(numero - 1);
        printf("Esquerda \n");
    }
}

int main()
{
    int torre = 5, bispo = 5, rainha = 8;

    // Movimento Torre
    printf("\nMovimento Torre \n");
    movimentoTorre(torre);

    // Movimento Bispo
    printf("\nMovimento Bispo \n");
    movimentoBispo(bispo);

    // Movimento Rainha
    printf("\nMovimento Rainha \n");
    movimentoRainha(rainha);

    // Movimento Cavalo
    printf("\nMovimento Cavalo \n");
    for (int cavalo = 3 , cima = 2; cavalo > 0; cavalo--, cima--)
    {
        if(cima > 0) {
            printf("Cima \n");
            continue;
        } else {
            printf("Direita \n");
            break;
        }
    }

    return 0;
}