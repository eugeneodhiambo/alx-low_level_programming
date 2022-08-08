#include "function_pointers.h"

/**
  * int_index - function that for an integer
  * @array: ana array
  * @size: number of elements in an array
  * @cmp: pointer of the function to be used to return values
  *
  * Return: return -1 if no match
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
