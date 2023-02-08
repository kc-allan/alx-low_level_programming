#include "main.h"
/**
 * read_textfile - reads text file and prints it to STDOUT
 * @filename - pathe to file
 * @letters: number of letters to be printed
 * Return: number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t nr = 0, nw = 0;
	char *cont;

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		close(file);
		return (0);
	}
	cont = malloc(letters);
	if (!cont)
	{
		close(file);
		return (0);
	}
	nr = read(file, cont, letters);
	if (nr == -1)
	{
		close(file);
		free(cont);
		return (0);
	}
	nw = write(STDOUT_FILENO, cont, nr);
	if (nw == -1 || nw != nr)
	{
		close(file);
		free(cont);
		return (0);
	}
	close(file);
	free(cont);
	return (nw);
}
