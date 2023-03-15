#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5] = {4, 10, 2, 3, 8};
    int max = arr[0];
    for(int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            
        }
        
    }
    
    int max_2 = arr[0];
    for(int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if(arr[i] != max && arr[i] > max_2)
        {
            max_2 = arr[i];
        }
    }

    int max_3 = arr[0];
    for(int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if(arr[i] != max && arr[i] != max_2 && arr[i] > max_3)
        {
            max_3 = arr[i];
        }


    }
    printf("%i", max_3);
}
