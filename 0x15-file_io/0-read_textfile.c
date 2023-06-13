#include "main.h"

/**
 * read_textfile - this reads a text file and prints it
 * @filename: the variable pointer
 * @letters: the size letters
 * Description: this writes a function that reads a text file and prints it
 * to the POSIX standard output
 * Return: the actual number of letters it could read and print, 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, 0_RDONLY);
	r = read(o, buffer, letter);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == =1 || w != r)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(0);

	return (w);
}
