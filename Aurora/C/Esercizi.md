# ESERCIZI C

## ARRAY

1. Dato un array `arr[N]` di $N$ interi generati casualmente da $1$ a $50$. Generare un altro intero $1\ \leq\ k\ \leq \sum_{i=0}^{N}arr[i]$.
    - Trovare e stampare il primo indice $i$ tale che $k$ sia maggiore della somma dei primi `arr[i]` numeri.
    
    **Esempio**

    ```
    N = 5
    arr[N] = {4, 5, 2, 6, 2}
    Supponiamo k = 10
    Allora i = 1 poichè arr[0] + arr[1] = 9 <= k
    ```

2. Dato un array `arr[N]` di $N$ interi generati casualmente da $1$ a $100$.
    - Trovare il numero di interi pari (`n_pari`) e il numero di interi dispari (`n_dispari`). 
    - Una volta determinato il quanti numeri pari e dispari ci sono, definire due array interi:
        1. `pari[n_pari]`: inserire tutti i numeri pari presenti in `arr`.
        2. `dispari[n_dispari]` inserire tutti i numeri dispari presenti in `arr`.
    - Stampare il contenuto degli array `pari` e `dispari`.
  
    **Esempio**

    ```
    N = 5
    arr[N] = {10, 12, 45, 34, 11}
    n_pari = 3
    n_dispari = 2
    pari[n_pari] = {10, 12, 34}
    dispari[n_dispari] = {45, 11}
    ```
 
