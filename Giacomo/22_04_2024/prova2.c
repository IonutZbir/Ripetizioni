#include <stdio.h>
main()
{
    int arecchia[8], c, tot = 0;
    // dato che l'es richiede una somma mettiamo la variabile totale con il valore 0
    float media;
    // variabile per calcolare la media succesivamente
    for (c = 0; c < 8; c++)
    {
        // assegnamo valore al contatore lo impostiamo minore di 8 in modo
        //  da fermarlo al raggiungimento del numero dell array
        // e incrementiamo c ad ogni iterazione
        printf("dammi un numero:");
        scanf("%d", &arecchia[c]);
        // scriviamo comando che richiede un numero e sotto il comando di lettura
        tot += arecchia[c];
    }
    media = tot / 8.0; // calcoliamo la media
    printf("il totale e':%d\n", tot);
    printf("la media e':%f", media);
    // stampiamo il totale di somma e media
    return 0;
}