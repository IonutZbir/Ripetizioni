#include <stdio.h>

int my_len(int*);

int main(){

    int arr[] = {1, 2, 3, 4, 5};

    /* 
    + sizeof(arr) -> restituisce la dimensione dell'array in byte
    + sizeof(arr[0]) -> restituisce la dimensione di un singolo elemento dell'array
    + otteniamo la lunghezza dell'array dividendo queste due dimensione,
    + es:
    + int arr[] = {1, 2, 3, 4, 5}; -> sizeof(arr) = 5 * sizeof(int), che in genere è 4 byte, quindi 20 bytes
    + sizeof(arr[0]) = 4, ma non è detto
    + => len(arr[0]) = 5, ovvero 20 / 4.
    */

    int len_a = sizeof(arr) / sizeof(arr[0]); 

    int len_a_2 = my_len(arr);

    printf("len_a: %d\nlen_a_2: %d\n", len_a, len_a_2);

    /*
    + Non funziona perché gli array in C sono rappresentati come un puntatore ad un area di memoria contigua, 
    + quindi, noi passiamo alla funzione un puntatore all'area di memoria, ovvero alla prima celle di memoria.
    + Quindi quando nella funzione my_len facciamo sizeof(arr), stiamo semplicemente ottenendo la dimensione di 
    + un puntatore, che in C è 8 byte. Quindi, quando passiamo un array ad una funzione, gli dobbiamo pasare anche
    + la sua dimensione, oppure mettere tutto in una struct.
    */

    // Come accedere ad elemento di un array?

    int el1 = arr[0];
    int el2 = arr[1]; // ....

    // Gli elementi all'interno di un array sono indicizzati a partire da 0 fino a "len(arr) - 1"

    // Un altro metodo per accedere agli elementi
    printf("[ ");
    for (int i = 0; i < len_a; i++){
        printf("%d, ", arr[i]);
    }
    printf("]");

    return 0;

}

int my_len(int *arr){
    return sizeof(arr) / sizeof(arr[0]);
}