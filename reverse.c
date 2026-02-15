#include <stdio.h>

void digit(int a)
{
    if (a == 0)
    {
        return;
    }

    int d = a % 10;        
    printf("%d\n", d);     
    digit(a / 10);         
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    digit(num);

    return 0;
}