#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "file_prova.txt"

int main(int argc, char const *argv[])
{
    FILE *file = fopen(FILE_NAME, "a+");

    /*
    + fopen ritorna un puntatore ad un "file". Ad un file possiamo accedere nelle seguenti modalità:ù
    + "w": Apre un file in modalità scrittura (il contenuto del file viene sottoscritto).
           Se il file non esiste lo crea.
    + "r": Apre un file in modalità lettura. Se non esiste, fopen ritorna NULL
    + "a": Apre un file in modalità append, ovvero scrive dalla fine del file.
           Se il file non esiste lo crea.
    + "w+": Apre un file sia in modlità scrittura che lettura. Se il file non esiste lo crea.
    + "r+": Apre un file sia in modalità lettura che scrittura. Se il file non esiste, fopren ritorn NULL
    + "a+": Apre un file sia in modalità append che lettura. Se il file non esiste lo crea.
    */

    // fread()
    // fwrite()
    // fprintf()
    // int str_to_number = atoi(str);
    if (file != NULL)
    {
        char buffer[4096];
        int n_read = fread(buffer, sizeof(char), /*3 * sizeof(char)*/4096, file);
        buffer[n_read + 1]  = '\0';
        if (n_read > 0)
        {
            printf("Ho letto: %s \n", buffer);
        }
        else if (n_read == 0)
        {
            printf("Il file è vuoto, non ho letto nulla\n");
        }
        else
        {
            fprintf(stderr, "Qualcosa è andato male durante la lettura da file\n");
        }
        char *write_buffer = "Scrivo\n";
        int n_write = fwrite(write_buffer, sizeof(char), strlen(write_buffer), file);
    }

    fclose(file);

    return 0;
}
