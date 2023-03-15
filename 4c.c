#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[7] = {2, 3, 5, 9, 7, 5, 7};
    int count = 0;

    for(int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if(arr[i] % 2 != 0)
        {
            count ++;
        }

    }
    printf("%i", count);


}
