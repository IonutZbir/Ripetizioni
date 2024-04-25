#include <stdio.h>
main()
{
    int i, sag[11], c;
    // i=contatore ciclo  sag=nome array c=contatore
    c = 0;
    // abbiamo dato il valore al contatore
    for (i = 0; i < 11; i++)
    {
        // diamo al contatore i il valore 0 il contatore va impostato minore del
        //  del numero dell array i++ incrementa il conatore ad ogni iterazione
        sag[i] = c;
        // diamo il valore del contatore all array
        c++;                  // incrementiamo il contatore ad ogni iterazione
        printf("%d", sag[i]); // stampiamo valore array
    }
    return 0;
}