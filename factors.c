#include <stdio.h>

void factor(int i, int a)
{
    if (i > a)   // Base condition
    {
        return;
    }

    if (a % i == 0)   // Check if i is a factor
    {
        printf("%d is a factor\n", i);
    }

    factor(i + 1, a);   // Recursive call
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    factor(1, num);

    return 0;
}