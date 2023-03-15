#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5] = {10, 4, 2, 3, 8};
    int min_1 = arr[0];
    for(int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if(arr[i] < min_1)
        {
            min_1 = arr[i];
            
        }
        
    }
    int min_2 = arr[0];
    for(int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        
            if( arr[i] != min_1 && arr[i] < min_2)
            {
                min_2 = arr[i];
                
            }
        
    }
    printf("%i", min_2);
}
