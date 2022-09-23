/**
 * reverse_array - reverses the content of an array integers
 * @a: int array to reverse
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++, n--)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
	}
}
