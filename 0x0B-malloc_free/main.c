#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}

		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int width, int height)
{
	int w;
	int h;
	
	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			printf("%d ", grid[h][w]);
			w++;
		}
		printf("\n");
		h++;
	}
}
/**
 * main - check the codes
 *
 * Return: Always 0.
 */
int main(void)
{
	/** 0-create_array.c */
	/*
	char *buffer;

	buffer = create_array(98, 'H');
	if (buffer == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}

	simple_print_buffer(buffer, 98);
	free(buffer);
	*/

	/** 1-strdup.c */
	/**
	char *s;

    s = _strdup("ALX SE");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
	*/

	/** 2-str_concat.c */
	/**
	char *s;
	s = str_concat("Betty ", "Holberton");
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	*/

	/** 3-alloc_grid.c, 4-free_grid.c */
	int **grid;
	grid = alloc_grid(6, 4);
	if (grid == NULL)
	{
		return (1);
	}
	print_grid(grid, 6, 4);
	printf("\n");
	grid[0][3] = 98;
	grid[3][4] = 402;
	print_grid(grid, 6, 4);
	free_grid(grid, 4);

	return (0);
}
