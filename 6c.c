#include <stdio.h>
#include <stdlib.h>

void swap(int* x, int* y)
{
   *x = *x ^ *y;
   *y = *x ^ *y;
   *x = *x ^ *y;

}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11};

    int size = (sizeof(arr) / sizeof(int));
    for(int i = 0; i < size / 2; i++)
    {
        for(int j = size / 2 + 1; j < size; j++)
        {
            
            if(arr[i] % 2 == 0 && arr[j] % 2 != 0)
            {
                swap(&arr[i], &arr[j]);
            }
        }

    }

    if (arr[size - 1] % 2 != 0)
    {
        for (int i = size / 2; i < size; i++)
        {
            swap(&arr[size - 1], &arr[i]);
            break;
        }
        
    }

    for(int i = 0; i < size; i++)
    {
        printf("%i \t", arr[i]);

    }
    



 	 

	

	
    

    
}


