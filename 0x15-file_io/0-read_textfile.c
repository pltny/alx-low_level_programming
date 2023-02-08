#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int x;
	ssize_t m, p;
	char *buf;

	if (!filename)
		return (0);

	x = open(filename, O_RDONLY);

	if (x == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	m = read(x, buf, letters);
	p = write(STDOUT_FILENO, buf, m);

	close(x);

	free(buf);

	return (p);
}
