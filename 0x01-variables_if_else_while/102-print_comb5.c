#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * from 00-99, with no repeats and separated by commas and spaces.
 * All numbers are printed with two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int tens1, tens2, ones1, ones2;

    for (tens1 = 0; tens1 <= 9; tens1++) /* print first two-digit combo */
    {
        for (ones1 = 0; ones1 <= 9; ones1++)
        {
            for (tens2 = tens1; tens2 <= 9; tens2++) /* print second two-digit combo */
            {
                for (ones2 = ones1; ones2 <= 9; ones2++)
                {
                    if (tens1 == tens2 && ones2 <= ones1) /* no repeat combinations */
                        continue;

                    putchar(tens1 + '0');
                    putchar(ones1 + '0');
                    putchar(' ');
                    putchar(tens2 + '0');
                    putchar(ones2 + '0');

                    if (tens1 == 9 && ones1 == 8 && tens2 == 9 && ones2 == 9)
                        putchar('\n');
                    else
                    {
                        putchar(',');
                        putchar(' ');
                    }
                }
            }
        }
    }

    return (0);
}

