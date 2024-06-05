#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>

/**
 * mul - multiplies two positive numbers
 * @num1: the first number
 * @num2: the second number
 *
 * Return: void (no return value)
 */
void mul(char *num1, char *num2)
{
    int len1, len2, i, j, carry, tmp;
    char *result;

    if (!_isdigit(num1) || !_isdigit(num2))
    {
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
        _putchar('\n');
        exit(98);
    }

    len1 = _strlen(num1);
    len2 = _strlen(num2);

    result = malloc((len1 + len2) * sizeof(char));
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
        result[i] = '0';

    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        for (j = len2 - 1; j >= 0; j--)
        {
            tmp = (num1[i] - '0') * (num2[j] - '0') + (result[i + j + 1] - '0') + carry;
            result[i + j + 1] = (tmp % 10) + '0';
            carry = tmp / 10;
        }

        if (carry)
            result[i + j + 2] = carry + '0';
    }

    i = 0;
    while (result[i] == '0' && i < len1 + len2)
        i++;

    if (i == len1 + len2)
        _putchar('0');
    else
        for (; i < len1 + len2; i++)
            _putchar(result[i]);
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
 * _isdigit - checks if a string contains only digits
 * @str: the string to check
 *
 * Return: 1 if all characters are digits, otherwise 0
 */
int _isdigit(char *str)
{
    while (*str)
    {
        if (*str < '0' || *str > '9')
            return 0;
        str++;
    }
    return 1;
}

/**
 * main - Entry point for the program.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 * 
 * Return: On success, returns 0.
 */

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        write(STDERR_FILENO, "Error\n", 6);
        return (98);
    }

    mul(argv[1], argv[2]);

    return 0;
}


