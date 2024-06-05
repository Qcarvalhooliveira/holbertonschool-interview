#include "holberton.h"
#include <stdlib.h>
#include <unistd.h>
#include <string.h> 

/**
 * print_error_and_exit - prints "Error" and exits with status 98
 */
void print_error_and_exit(void)
{
    write(STDERR_FILENO, "Error\n", 6);
    exit(98);
}

/**
 * is_digit_str - checks if a string is composed of only digits
 * @str: the string to check
 *
 * Return: 1 if true, 0 if false
 */
int is_digit_str(const char *str)
{
    while (*str)
    {
        if (*str < '0' || *str > '9')
            return (0);
        str++;
    }
    return (1);
}

/**
 * mul - multiplies two positive numbers
 * @num1: the first number
 * @num2: the second number
 *
 * Return: void (no return value)
 */
void mul(char *num1, char *num2)
{
    int len1, len2, i, j, carry;
    int *result;

    len1 = strlen(num1);
    len2 = strlen(num2);

    result = calloc(len1 + len2, sizeof(int));
    if (result == NULL)
        print_error_and_exit();

    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        for (j = len2 - 1; j >= 0; j--)
        {
            int tmp = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;

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
 * main - Entry point for the program.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: On success, returns 0.
 */
int main(int argc, char **argv)
{
    if (argc != 3 || !is_digit_str(argv[1]) || !is_digit_str(argv[2]))
        print_error_and_exit();

    mul(argv[1], argv[2]);

    return (0);
}
