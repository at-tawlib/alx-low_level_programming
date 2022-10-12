/**
 * int_index - searches for an integer
 * @array: array to search through
 * @size: number of elements in array
 * @cmp: pointer to the function to be used to compare values
 * Return: the index of the first element non zero is returned
 * functions pointed to include found in 2-main.c file
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, value;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		value = cmp(array[i]);
		if (value != 0)
			return (i);
	}
	return (-1);
}
