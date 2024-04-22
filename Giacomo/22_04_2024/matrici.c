#include <stdio.h>

int main(int argc, char const *argv[])
{

    int m[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}};

    int m1[][2] = {
        {1, 2},
        {3, 4},
        {5, 6}};

    /*
    NON si puo!!

    int m1[3][]= {
        {1, 2},
        {3, 4},
        {5, 6}};
    */

    for (int r = 0; r < 3; r++)
    {
        printf("[ ");
        for (int c = 0; c < 2; c++)
        {
            printf("%d ", m[r][c]);
        }
        printf("]\n");
    }
    printf("\n");

    return 0;
}
