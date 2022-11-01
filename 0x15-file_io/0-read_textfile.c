#include "main.h"
/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int s;
	int t;
	int fd;
	char *buf;

	if (filename == NULL)
		return (0);
	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * (letters));
/*
 * @buf - memory buffer*
 * here we are allocating the memory of letters using malloc
 * Now lets do a testcase for it the memory is not allocated
 */
	if (!buf)
		return (0);
	s = read(fd, buf, letters);
	t = write(STDOUT_FILENO, buf, s);

	close(fd);
	free(buf);
	return (t);
}


