#include "factor.h"

/**
 * main - Entry point.
 * Return: void
 */
int main(int argc, char *argv[])
{
	FILE *file;
	size_t size;
	ssize_t len;
	char *line = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: factor <filename>\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((line = getline(&line, &size, file)) != -1)
	{
		factorize(line);
	}
	return (0);
}
