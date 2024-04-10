#include "main.h"
/**
 * read_textfile - read text file and print POSIX stdout
 * @filename: filename
 * @letters: amount of chars requested of filename to read
 * and write
 * Return: amount of bytes written to stdout
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fd_op, re, wr;
char *buffer;
if (filename == NULL)
{
return (0);
}
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
return (0);
free(buffer);
}
fd_op = open(filename, O_RDONLY);
if (fd_op < 0)
{
return (0);
free(buffer);
}
re = read(fd_op, buffer, letters);
if (re < 0)
{
return (0);
free(buffer);
}
wr = write(STDOUT_FILENO, buffer, re);
if (wr < 0)
{
return (0);
free(buffer);
}
free(buffer);
close(fd_op);
return (wr);
}
