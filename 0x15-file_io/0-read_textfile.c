#include "main.h"

/**
 * read_textfile - this reads a text file and prints it
 * @filename: the variable pointer
 * @letters: the size letters
 * Description: this writes a function that reads a text file and prints it
 * to the POSIX standard output
 * Return: the actual number of letters it could read and print,
 * 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters);
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}
