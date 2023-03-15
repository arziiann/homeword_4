#include <stdlib.h>
#include <stdio.h>

int main()
{
    int arr1[7] = {1, 4, 4, 4, 5, 7, 7};
    int arr2[7] = {1, 4, 4, 4, 5, 7, 7};
    int count = 0;
        
    for(int gogik = 0; gogik < sizeof(arr1) / sizeof(int); gogik++)
    {   
         
         if(arr1[gogik] == arr2[gogik])
         {
             count++;
                
         }
    }

    if(count == 7)
    {
        printf("hamynknum en");
    }

    else
    {
        printf("chen hamynknum");
    }

}
