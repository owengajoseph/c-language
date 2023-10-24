#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i = 0;
    int k = 0;

    int arry1[3][3] =
        {
            1, 2, 3,
            4, 5, 6,
            7, 8, 9};

    int arry2[3][3] =
        {
            1, 2, 3,
            4, 5, 6,
            7, 8, 9

        };
    for (int rows = 0; rows < 1; rows++)

    {
        for (int columns = 0; columns <= 2; columns++)
        {
            int value1 = arry1[rows][i];
            int value2 = arry2[i][k];
            i = i + 1;
            if (i == 3)
            {
                i = 0;
                k = k + 1;
            }

            int store = value1 * value2;
            printf("%d\n",store);
        }
    }
}