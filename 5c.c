#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[7] = {2, 4, 3, 7, 9, 10, 11};
    int arr1[sizeof(arr) / sizeof(int)];
    
    for(int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if(arr[i] % 2 != 0)
        {
            arr1[i] = arr[i];
            printf("%i \n", arr1[i]);
        }

    }





}
