// Meriora principale (RAM)
// Memora secondaria (Hard Disk) <- file

// file: nome ed estensione
// giorni_settimana.txt

// aprire il file "giorni_settimana.txt" e stampare a video il suo contenuto

#include <stdio.h> // printf, scanf

/* Funzioni per i file:
    - fprintf() [scrittura su file]
    - fscanf() [lettura da file]

    - fopen() [apertura di un file]
    - fclose() [chiusura di un file]
*/

int main1()
{

    // una variabile **speciale**, che ci identifica il nostro file

    // un file è identificato dal suo nome, dal suo percorso

    // C://...

    int quantita_di_numeri_da_leggere;
    FILE *fp = fopen("giorni_settimana.txt", "r"); // file open prende due parametri: nome del file che vogliamo aprire e modalità di apertura
    // r: read, leggere
    // w: write, scrivere
    // a: append, scrivere

    // Sappiamo che nella prima riga del file, è presente il numero che rappresenta la quantità di numeri da leggere.

    fscanf(fp, "%d", &quantita_di_numeri_da_leggere);

    int N[quantita_di_numeri_da_leggere];

    for (int i = 0; i < quantita_di_numeri_da_leggere; i++)
    {
        fscanf(fp, "%d", &N[i]);
    }

    for (int i = 0; i < quantita_di_numeri_da_leggere; i++)
    {
        printf("%d ", N[i]);
    }

    printf("\n");

    fclose(fp); // file close

    return 0;
}

int main2()
{
    FILE *fp = fopen("tabelline.txt", "w");

    // in modalità w, il file viene riscritto
    // in modalità a, la scrittura continua

    // int a = 10;
    // int b = 123;
    // int somma = a + b;

    // a b somma -> 10 123 133

    /*
    2 0 0
    2 1 2
    2 2 4
    2 3 6
    ..
    ..
    2 10 20
    */
    int tabellina;
    int n = 2;

    for (int i = 0; i <= 10; i++)
    {
        tabellina = n * i;
        fprintf(fp, "%d %d %d\n", n, i, tabellina);
    }

    fclose(fp);
}

int main3()
{
    FILE *fp = fopen("tabelline.txt", "a");

    int tabellina;
    int n = 3;

    for (int i = 0; i <= 10; i++)
    {
        tabellina = n * i;
        fprintf(fp, "%d * %d = %d\n", n, i, tabellina);
    }

    fclose(fp);
}

int main()
{
    FILE *fp = fopen("tabelline.txt", "w");

    /*
    2 0 0
    2 1 2
    2 2 4
    2 3 6
    ..
    ..
    2 10 20
    3 0 0
    ..
    ..
    4 0 0
    ..
    ..
    */

    int n = 10;
    int tabellina;

    for (int i = 0; i <= n; i++)
    {
        fprintf(fp, "La tabellina del %d\n", i);
        for (int j = 0; j <= n; j++)
        {
            tabellina = i * j;
            fprintf(fp, "%d * %d = %d\n", i, j, tabellina);
        }
    }

    fclose(fp);

    /*
        PER CASA: hai 4 file: somma.txt, sottrazione.txt
        - In somma.txt fai la somma due a due dei primi 100 numeri.
        0 + 0 = 0
        ..
        ..
        0 + 10 = 0
        1 + 0 = 0
        ..
        ..
        1 + 10 = 11
        ..
        ..
        100 + 0 = 0
        ..
        ..
        100 + 10 = 110

        - In differenza.txt: Prendi da tastiera 20 numeri e li memorizzi in un array poi fai la loro sottrazione:
        1 5 7 8 2 -> 1 - 5 - 7 - 8 - 2
        Se la sottrazione è positiva la scrivi sul file sottrazione.txt
        Se la sottrazione è negativa, la moltiplichi per -1 e la scrivi sul file.
    */
}