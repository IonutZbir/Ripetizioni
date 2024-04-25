# ESERCIZI C

## ARRAY

1. Dato un array `arr[10]` di $10$ interi generati casualmente da $1$ a $50$ (Chiedere a Chat Gpt come si generano numeri casuali in C). 
    - Scrivere su un file di testo "numeri_random.txt" il contenuto dell'array appena creato con numeri randomici.
    - Calcolare il minimo di questi 10 numeri e scriverlo sullo stesso file "numeri_random.txt", nella riga successiva in questo modo: "Il minimo tra questi numeri e': {valore del minimo}".

2. Dato un array `arr[20]` di $N$ interi generati casualmente da $1$ a $100$.
    - Trovare il numero di interi pari (`n_pari`) e il numero di interi dispari (`n_dispari`). 
    - Una volta determinato il quanti numeri pari e dispari ci sono, definire due array interi:
        1. `pari[n_pari]`: inserire tutti i numeri pari presenti in `arr`.
        2. `dispari[n_dispari]` inserire tutti i numeri dispari presenti in `arr`.
    - Scrivere su un file di testo "pari_dispari.txt" il contenuto degli array `pari` e `dispari`.
  
    **Esempio**

    ```
    N = 5
    arr[N] = {10, 12, 45, 34, 11}
    n_pari = 3
    n_dispari = 2
    pari[n_pari] = {10, 12, 34}
    dispari[n_dispari] = {45, 11}
    ```
 
