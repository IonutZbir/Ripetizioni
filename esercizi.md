# Esercizi

## Esercizio 1 - Rapporto vocali/consonanti (EASY)

1. Scrivere una funzione `contaVocali` che prende in input una stringa `s` e ritorna in output il numero di vocali
2. Scrivere una funzione `contaConsonanti` che prende in input una stringa `s` e ritorna in output il numero di consonanti
3. Usare queste due funzioni per calcolare il rapporto tra vocali e consonanti di `s`.

## Esercizio 2 - Max, Min, Sum, Diff, Mult, Div (EASY)

1. Scrivere una funzione `max` che prende in input una lista di numeri e ritorna il massimo di essi.
2. Scrivere una funzione `min` che prende in input una lista di numeri e ritorna il minimo di essi.
3. Scrivere una funzione `sum` che prende in input una lista di numeri e ritorna la somma di essi.
4. Scrivere una funzione `diff` che prende in input una lista di numeri e ritorna la differenza di essi.
5. Scrivere una funzione `mult` che prende in input una lista di numeri e ritorna il prodotto di essi.

!!! tip
    Fare attenzione a non moltiplicare sempre per 0.
6. Scrivere una funzione `div` che prende in input una lista di numeri e ritorna il rapporto di essi.

!!! tip
    Fare attenzione a non dividere per 0.

## Esercizio 3 (EASY)

1. Scrivere una funzione che dato in input un numero intero `n` (nel caso in cui `n` non fosse intero, ritornare un messaggio di errore), creare una lista contente i valori che vanno da `1` a `n`. Usare `append`.

## Esercizio 4 - Scambia due numeri (MEDIUM)

1. Scrivere una funzione `swap` che prende in input 2 numeri e scambia il loro valore: `a = 3, b = 4 -> swap(a, b) -> b = 3, a = 4`.

## Esercizio 5 (MEDIUM)

1. Scrivere una funzione che data in input una frase `"Python è il miglior linguaggio di programmazione"`, ritorni in output il numero di parole della frase.

## Esercizio 6 - List, stringhe e dizionari (MEDIUM - HARD)

1. Data una lista di stringhe, `["ciao", "cibo", "python"]`, scrivere una funzione che crei un dizionario dove la chiave è la stringa e il valore è la usa lunghezza: `{"ciao": 4, "cibo": 4, "python": 6}`.
2. Data una lista di stringhe, `["ciao", "cibo", "python"]`, scrivere una funzione che crei un dizionario dove la chiave è un numero che rapresenta la lunghezza delle parole e il valore è una lista contenenti le parole di quella lunghezza: `{4: ["ciao", "cibo"], 6: "python"}`.
3. Scrivere una funzione `rimuovi_doppioni` che data una lista in input, ritorna una copia della lista senza doppioni (In pratica la converti in un `set`, senza usare `set()` ovviamente :-) ).

## Esercizio 7 - Istogramma (HARD)

1. Scrivi una semplice funzione che, data una lista di numeri, fornisca in output un istogramma basato su questi numeri, usando asterischi per disegnarlo.

Data ad esempio la lista `[3, 7, 9, 5]`, la funzione dovrà produrre questa sequenza:

!!! tip
    In Python la scrittura `print("*" * 3)` stamperà a video `***` quindi `print("*" * n)`, stamperà "*" $n$ volte.

```python
***

*******

*********

*****
```

## Esercizio 8 - Frequenza (MEDIUM)

Scrivi una funzione che, data una stringa come parametro, restituisca un dizionario rappresentante la "frequenza di comparsa" di ciascun carattere componente la stringa.

Per esempio, data una stringa `"ababcc"`, otterremo in risultato `{"a": 2, "b": 2, "c": 2}`
