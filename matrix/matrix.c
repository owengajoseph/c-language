#include <stdio.h>
#include <stdlib.h>
int main()
{

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

    for (int k = 0; k < 1; k++) // cheaks for colum values in arry2
    {
        for (int i = 0; i < 1; i++)
        {
            int ans;

            for (int j = 0; j < 3; j++)
            {

                int row = arry1[i][j];
                int column = arry2[j][k]; // value at column(arry2)
                ans =(ans+ (row * column));
                
                printf("%d", ans);
                if (j == 1)
                {
                    break;
                }

               // printf("%d/t", row);
                //printf("%d/t", column);
            }
        }
    }*/
}
