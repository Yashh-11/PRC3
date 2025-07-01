#include <stdio.h>

int main()
{

    printf("Alphabets from a to z by skipping 3 letters:\n");

    for (char i = 'a'; i <= 'z'; i += 4)
    {
        printf("%c ", i);
    }

    return 0;
}
