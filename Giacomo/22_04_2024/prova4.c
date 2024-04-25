#include <stdio.h>

int main()
{
    FILE *file;
    int num1, num2, somma;

    file = fopen("input.txt", "r");

    if (file == NULL)
    {
        printf("Impossibile aprire il file.");
        return 1;
    }

    fscanf(file, "%d %d", &num1, &num2);

    fclose(file);

    somma = num1 + num2;

    printf("La somma di %d e %d è: %d\n", num1, num2, somma);

    return 0;
}