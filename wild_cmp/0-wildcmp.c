#include "holberton.h"

/**
 * wildcmp - Compares two strings and returns 1 if they can be
 * considered identical, otherwise returns 0.
 * @s1: The first string.
 * @s2: The second string, which can contain the special character *.
 *
 * Return: 1 if the strings are identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
    if (*s1 == '\0' && *s2 == '\0')
        return (1);

    if (*s2 == '*')
    {
        if (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)))
            return (1);
    }

    if (*s1 == *s2)
        return (wildcmp(s1 + 1, s2 + 1));

    return (0);
}
