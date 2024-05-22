#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main(){

    srand(time(NULL));

    int a[N], b[N], h, n, i, j, trovato, temp;

    /*
    PUNTO A
    */
    a[N - 1] = rand() % 4;
    for(i = N - 2; i >= 0; i--){
        a[i] = rand() % (a[i + 1] + 3) + a[i + 1];
    }

    /*
    PUNTO B
    */
    printf("Inserire un valore in [3, 4]\n");
    scanf("%d", &h);

    for(i = 0; i < h; i++){
        b[i] = rand() % a[0] + a[N - 1];
    }

    while(i < N){
        trovato = 0;
        n = rand() % a[0] + a[N - 1];
        j = 0;
        for(j = 0; j < h; j++){
            if(b[j] == n)
                trovato = 1;
        }
        if(!trovato){
            b[i] = n;
            i++;
        }
    }

    /*
    PUNTO C
    */
    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N-i-1; j++) {
            if (b[j] < b[j+1]) {
                temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
            }
        }
    }

    /*
    PUNTO D
    */
    printf("a[%d] = [", N);
    for(i = 0; i < N - 1; i++){
        printf("%d\t, ", a[i]);
    }
    printf("%d\t]\n", a[N - 1]);

    printf("b[%d] = [", N);
    for(i = 0; i < N - 1; i++){
        printf("%d\t, ", b[i]);
    }
    printf("%d\t]\n", b[N - 1]);

    /*
    PUNTO E
    */
    printf("         ");
    for(i = 0; i < N; i++){
        if(a[i] == b[i]){
            printf("  *\t");
        }else{
            printf(" \t");
        }
    }
    printf("\n");

}