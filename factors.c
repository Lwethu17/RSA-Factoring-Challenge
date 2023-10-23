#include "factor.h"

/**
 * main - Entry point of the programm.
 * argc: Pointer to arguments
 * argv: Number of arguments
 *
 * Return: void.
 */
int main(int argc, char *argv[])
{
	FILE *file;
	size_t size;
	ssize_t len;
	char *line = NULL;

	if (argc != 2)
	{
		printf(stderr, "Usage: factors <file>\n");
		exit(EXIT_FAILURE);
	}

	FILE *file = fopen(argv[1], "r");

	if (file == NULL)
	{
		printf(stderr, "Oops, can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while ((len = getline(&line, &size, file)) != -1)
	{
		factorize(line);
	}
	return (0);
}
