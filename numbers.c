#include <stdio.h>

void printing(int i)
{
    if (i > 10)  
    {
        return;
    }

    printf("i = %d\n", i);   
    printing(i + 1);         
}

int main()
{
    printing(1);   
    return 0;
}