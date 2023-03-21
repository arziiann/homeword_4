#include <stdio.h>

int main()
{
    int arr[] = {900, 8, 3, 9, 803};
    int max1 = arr[0];
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if (arr[i] > max1)
        {
            max1 = arr[i];
        }
        
    }

    printf("max1 -- > %i ", max1);

    int max2 = 0;
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if (arr[i] != max1)
        {
            max2 = arr[i];
            break;
        }
        
    }
    
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if (arr[i] != max1 && arr[i] > max2)
        {
            max2 = arr[i];
        }
        
    }
    printf("max2 -- > %i ", max2);

    int max3 = 0;
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if (arr[i] != max1 && arr[i] != max2)
        {
            max3 = arr[i];
            break;
        }
        
    }
    
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if (arr[i] != max1 && arr[i] != max2 && arr[i] > max3)
        {
            max3 = arr[i];
        }
        
    }
    printf("max3 -- > %i ", max3);


    
}
