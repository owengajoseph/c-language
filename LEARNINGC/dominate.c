#include <stdio.h>
// checks the dominator value in an arry

int dominator(int arry[], int s)
{

    int num = 0;
    arry[0];

    for (int i = 0; i <= s; i++)
    {

        if (arry[0] == arry[i])
        {
            printf("%d", num = num + 1);
            arry[0] = arry[i];
        }
    }
}

int main()
{

    int arr[] = {3, 4, 3, 2, 3, 1, 3};
    int size = (sizeof(arr) / sizeof(int));
    dominator(arr, size);
}