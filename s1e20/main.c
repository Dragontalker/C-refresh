#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][4] = {{1},{5},{9}};

    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");

    }

    return 0;
}
