#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[7] = {2, 1, 5, 4, 3, 9, 8};
  
    for(int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if(arr[i] % 2 == 0)
        {
            printf("%i\n", arr[i]);
        }

    }






}
