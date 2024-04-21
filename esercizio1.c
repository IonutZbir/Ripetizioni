/*
a. In un vettore a[N] di interi inserire valori generati in 1..5
b. Per ciascuna posizione i calcolare il prodotto dei 4 valori del vettore a sx della posizione i 
(se non ci sono 4 valori, calcolare il prodotto sui valori disponibili); salvare i prodotti in un vettore b[N]
(se per esempio i vale 2 il prodotto verra calcolato solo su tre valori di a[] che sono a[0],a[1],a[2]
*/

#include <stdio.h>
#include <time.h>
#include <math.h>

#define N 9

int main(){

    srand(time(NULL));

    int arr_iniziale[N]; // 0 -> 8
    int arr_prodotti[N];
    int n_rand;

    for (int i = 0; i < N; i++)
    {
        n_rand = rand() % 5 + 1; // genera numeri tra 0 e 1
        //printf("Numero randomico: %d\n", n_rand);
        arr_iniziale[i] = n_rand;
    }

    printf("[ ");
    for (int i = 0; i < N - 1; i++)
    {
        printf("%d, ", arr_iniziale[i]);
    }
    printf("%d ", arr_iniziale[N - 1]);
    printf("]\n");

    for (int i = 0; i < N; i++)
    {
        int prodotto = 1;
        if (i >= 3) // il prodotto dei 4 valori a sx di i
        {
            int fine = i;
            int inizio = i - 3;
            for (int j = inizio; j <= fine; j++)
            {
                prodotto = prodotto * arr_iniziale[j];
            }
            arr_prodotti[i] = prodotto;
        }else{ // il prodotto dei valori a sx di i, nel caso in cui non ci sono 4 elementi a sx
            for (int j = 0; j < i; j++)
            {
                
                prodotto = prodotto * arr_iniziale[j];
            }
            arr_prodotti[i] = prodotto;
        }
    }

    printf("[ ");
    for (int i = 0; i < N - 1; i++)
    {
        printf("%d, ", arr_prodotti[i]);
    }
    printf("%d ", arr_prodotti[N - 1]);
    printf("]\n");
    


    // int len_a = 7;
    // int a[] = {1, 2, 3, 4, 5, 6, 7}; // ultimo elemento si trova in posizione len_a - 1
    
    // for (int i = 0; i < len_a; i++)
    // {
    //     printf("INDICE: %d, ELEMENTO: %d\n", i, a[i]);
    // }
    return 0;
}
