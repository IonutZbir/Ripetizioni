#include <math.h>
#include <stdio.h>
#include <time.h>
#define N 5
int main() {
  int v[N], i, x, np, nd;
  // np e nd sono due contatori in cui ci teniamo il numero di "numeri" pari e
  // il numero di "numeri" dispari.
  srand(time(NULL));
  for (i = 0; i < N; i = i + 1) {
    x = rand();
    x = x % 100; // x=x%k --> k=b-a+1=100-1+1=100
    x = x + 1;
    v[i] = x;
    printf("%3d ", v[i]);
  }
  printf("\n\n");

  np = 0;
  nd = 0;

  /*
  L'errore che facevi era di andare a dichiarare due array di dimensione np e
  nd. Il problema era che il contenuto di np e nd ancora non era noto, dunque
  andavi a dichiarare due array di dimensione sconosciuta. In C gli array sono
  statici, quando si dichiara un array, bisogna già sapere la sua dimensione.
  bisogna prima calcolare np e nd, e poi dichiarare i due array con queste
  dimensioni */

  // ci calcoliamo np e nd, ovvero quanti numeri pari e dispari ci sono
  for (i = 0; i < N; i++) {
    if (v[i] % 2 == 0)
      np++;
    else
      nd++;
  }

  int p[np], d[nd]; // dichiariamo due array grandi quanto sono i numeri pari e
                    // i numeri dispari
  int k = 0, j = 0;
  // k è una variabile che tiene conto di quanti numeri abbiamo inserito al 
  // omento in "p" j è una variabile che tiene conto di quanti numeri abbiamo 
  // nserito al momento in "d"

  // In questo ciclo, per ogni v[i], controlliamo se pari o dispari. Se pari
  // allora lo inseriamo nell'array "p" Se dispari lo inseriamo nell'array "d"
  for (i = 0; i < N; i++) {
    if (v[i] % 2 == 0) {
      p[k] = v[i];
      k++;
    } else {
      d[j] = v[i];
      j++;
    }
  }

  printf("Numeri Pari: [ ");
  for (int i = 0; i < np - 1; i++) {
    printf("%d, ", p[i]);
  }
  printf("%d ", p[np - 1]);
  printf("]\n");

  printf("Numeri Dispari: [ ");
  for (int i = 0; i < nd - 1; i++) {
    printf("%d, ", d[i]);
  }
  printf("%d ", d[nd - 1]);
  printf("]\n");

  printf("\n\n");
  return 0;
}
