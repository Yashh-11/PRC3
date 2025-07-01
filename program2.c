#include <stdio.h>

int main()
{
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle 0 as a special case
    if (num == 0)
    {
        count = 1;
    }
    else
    {
        // Convert negative number to positive
        if (num < 0)
        {
            num = -num;
        }

        // Count digits using loop
        while (num != 0)
        {
            num = num / 10;
            count++;
        }
    }

    printf("Total number of digits are : %d\n", count);

    return 0;
}
