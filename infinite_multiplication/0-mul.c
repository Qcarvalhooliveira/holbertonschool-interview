#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * mul - multiplies two positive numbers
 * @num1: the first number
 * @num2: the second number
 */


void mul(char *num1, char *num2)
{
    int len1, len2, i, j, carry, tmp, *result;

    len1 = strlen(num1);
    len2 = strlen(num2);

    if (!is_digit_string(num1) || !is_digit_string(num2))
    {
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
        _putchar('\n');
        exit(98);
    }

    result = malloc((len1 + len2) * sizeof(int));
    if (result == NULL)
    {
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
        _putchar('\n');
        exit(98);
    }

    for (i = 0; i < len1 + len2; i++)
        result[i] = 0;

    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        for (j = len2 - 1; j >= 0; j--)
        {
            tmp = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
            result[i + j + 1] = tmp % 10;
            carry = tmp / 10;
        }
        result[i + j + 1] = carry;
    }

    i = 0;
    while (i < len1 + len2 && result[i] == 0)
        i++;

    if (i == len1 + len2)
        _putchar('0');
    else
        for (; i < len1 + len2; i++)
            _putchar(result[i] + '0');
    _putchar('\n');

    free(result);
}

/**
 * _strlen - calculates the length of a string
 * @str: the string to calculate the length of
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
    int count = 0;
    while (*str)
    {
        count++;
        str++;
    }
    return count;
}


/**
 * is_digit_string - checks if a string contains only digits
 * @str: the string to check
 *
 * Return: 1 if all characters are digits, otherwise 0
 */
int is_digit_string(char *str)
{
    while (*str)
    {
        if (*str < '0' || *str > '9')
            return 0;
        str++;
    }
    return 1;
}
