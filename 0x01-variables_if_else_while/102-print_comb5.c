#include <stdio.h>
int main(void)
{
    int tens, ones, tens2, ones2;

    for (tens = 0; tens <= 9; tens++)
    {
        for (ones = 0; ones <= 9; ones++)
        {
            for (tens2 = tens; tens2 <= 9; tens2++)
            {
                for (ones2 = ones + 1; ones2 <= 9; ones2++)
                {
                    putchar(tens + '0');
                    putchar(ones + '0');
                    putchar(' ');
                    putchar(tens2 + '0');
                    putchar(ones2 + '0');

                    if (!(tens == 9 && ones == 8 &&
                          tens2 == 9 && ones2 == 9))
                    {
                        putchar(',');
                        putchar(' ');
                    }
                }
            }
        }
    }
    putchar('\n');

    return (0);
}

