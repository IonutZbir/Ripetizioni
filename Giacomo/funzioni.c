#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    /*
        SONO TUTTE FUNZIONI!
        printf();
        frprintf();
        rand();
        fopen();
        fclose();
    */

    int a = 4;
    int b = 5;
    printf("%d\n", a + b);

    // somma(a, b) è una chiamata di funzione
    // a, b si chiamano argomenti

    int sum = somma(a, b);
    int sum2 = somma(1000, 200);

    printf("SOMMA CON FUNZIONE: %d, %d\n", sum, sum2);

    int r = gen_rand_num(100);
    printf("NUMERO RANDOMICO: %d\n", r);

    return 0;
}

// int è il tipo di valore che ritora in output
// (int a, int b) è l'input della funzione somma

/*
gen_rand_num(100) -> ritorna nu numero randomico da 1 a 100
*/

int gen_rand_num(int n)
{
    int r = rand() % n + 1;

    return r;
}

void print_numeri()
{
    // Una funzione di tipo VOID non ritorna nulla
}

int somma(int x, int y)
{
    // x e y si chiamano parametri

    float a = 0;
    char c = 'a';
    int somma = 0;
    somma = x + y;

    return somma;
}
