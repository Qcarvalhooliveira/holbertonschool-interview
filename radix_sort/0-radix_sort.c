#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * getMax - A utility function to get maximum value in array
 * @array: The array to be examined
 * @size: Number of elements in the array
 *
 * Return: The maximum value in the array
 */
int getMax(int *array, size_t size);

/**
 * countSort - A function to do counting sort of array according to
 * the digit represented by exp
 * @array: The array to be sorted
 * @size: Number of elements in the array
 * @exp: Exponent representing the current digit position
 */
void countSort(int *array, size_t size, int exp);

/**
 * radix_sort - Sorts an array of integers in ascending order using the
 * Radix sort algorithm
 * @array: The array to be sorted
 * @size: Number of elements in the array
 */
void radix_sort(int *array, size_t size)
{
	int max = getMax(array, size);
	int exp;

	/* Execute countSort for each digit. Note that instead of passing digit number, exp is passed.
	 * exp is 10^i where i is the current digit number
	 */
	for (exp = 1; max / exp > 0; exp *= 10)
	{
		countSort(array, size, exp);
		print_array(array, size);
	}
}

int getMax(int *array, size_t size)
{
	int max = array[0];
	size_t i;

	for (i = 1; i < size; i++)
		if (array[i] > max)
			max = array[i];
	return (max);
}

void countSort(int *array, size_t size, int exp)
{
	int *output = malloc(size * sizeof(int)); /* output array */
	int count[10] = {0};
	size_t i;
	int j;

	/* Store count of occurrences in count[] */
	for (i = 0; i < size; i++)
		count[(array[i] / exp) % 10]++;

	/* Change count[i] so that count[i] now contains actual position of this digit in output[] */
	for (j = 1; j < 10; j++)
		count[j] += count[j - 1];

	/* Build the output array */
	for (i = size; i > 0; i--)
	{
		output[count[(array[i - 1] / exp) % 10] - 1] = array[i - 1];
		count[(array[i - 1] / exp) % 10]--;
	}

	/* Copy the output array to array[], so that array now contains sorted numbers */
	for (i = 0; i < size; i++)
		array[i] = output[i];

	free(output);
}
