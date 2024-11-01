/*
Dato un array v[N] di N interi casuali in 1..50
    - Generare un altro intero 1<=k<= somma
    - Trovare e stampare il primo indice i tale che k sia maggiore della somma
dei primi arr[i] numeri. Esempio N = 5 arr[N] = {4, 5, 2, 6, 2} Supponiamo k =
10 Allora i = 1 poichè arr[0] + arr[1] = 9 <= k
*/
#include <math.h>
#include <stdio.h>
#include <time.h>
#define N 10
int main()
{
  int v[N], i, n, somma, k;
  srand(time(NULL));
  for (i = 0; i < N; i = i + 1)
  {
    n = rand();
    n = n % 50; // n=n%k --> k=b-a+1=50-1+1=50
    n = n + 1;
    v[i] = n;
    printf("%d ", v[i]);
  }
  printf("\n\n");

  // Qui facciamo la somma di tutti i numeri all'interno dell'array
  somma = 0;
  for (i = 0; i < N; i++)
  {
    somma = somma + v[i];
  }

  k = rand();
  k = k % somma; // generiamo un numero k <= somma
  k = k + 1;

  printf("k = %d\n", k);

  int somma_parziale = 0;
  /*
      Nel ciclo for sotto, andiamo a considerare la varibile somma_parziale,
     nella quale teniamo la somma dei primi i numeri. Ogni volta che aggiorniamo
     questa somma, controlliamo che il k sia maggio o uguale. Se k >= allora
     fermiamo il ciclo for, altrimenti va avanti.

      L'errore che avevi fatto tu, era di andare a controllare se k >= somma
     totale, e non della somma dei primi i numeri, ovvero della somma_parziale.
  */
  for (i = 0; i < N; i++)
  {
    somma_parziale += v[i];
    printf("somma parziale: %d\n", somma_parziale);
    if (k >= somma_parziale)
    {
      printf("indice i = %d\n", i);
      break;
    }
  }

  printf("\n\n");
  return 0;
}
