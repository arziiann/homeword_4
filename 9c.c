#include <stdio.h>
#include <stdlib.h>

int foo(int n)
{
    
    if (n < 2) 
    {
        return 0;
    }

    else if (n == 2 || n == 3)
    {
        return 1;
    }
    else
    {
        for (int i = 2; i <= n/2; i++)
        {
            if (n % i == 0)
            {
                return 0;
            }
            
        }

    }
    return 1;
    
}

void print(int* n, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%i ", *(n + i));
    }
    
}
int main()
{
    int x = 0;
    scanf("%i", &x);
    int* ptr = (int*)malloc(x);
    unsigned int counter = 0;
    for (int i = 0; i < x; i++)
    {
        if (foo(i))
        {
            ptr[counter] = i;
            ++counter;
        }
        
    }

    print(ptr, counter);
    
    

    return 0;
}

