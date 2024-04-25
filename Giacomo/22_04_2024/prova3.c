// Memorizzare in un array di dieci posizioni i primi dieci numeri naturali.
#include <stdio.h>

int main()
{
    int numeriNaturali[10]; // Dichiarazione dell'array per memorizzare i numeri naturali
    int i;

    // Memorizzazione dei primi dieci numeri naturali nell'array
    for (i = 0; i < 10; i++)
    {
        numeriNaturali[i] = i; // Partendo da 0, il numero sarà proprio l'indice
    }

    // Stampare i numeri memorizzati nell'array
    printf("I primi dieci numeri naturali sono:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", numeriNaturali[i]);
    }
    printf("\n");

    return 0;
}