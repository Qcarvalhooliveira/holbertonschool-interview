#include "holberton.h"
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        write(STDERR_FILENO, "Error\n", 6);
        return (98);
    }
    mul(argv[1], argv[2]);
    return (0);
}
