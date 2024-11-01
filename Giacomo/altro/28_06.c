#include <stdio.h>

int main()
{

    int M[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // M[i][j] = i + j;
            printf("Inserire un numero\n");
            scanf("%d", &M[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) // questo scorre le righe
    {
        for (int j = 0; j < 3; j++) // questo scorre le colonne di ciascuna riga
        {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}