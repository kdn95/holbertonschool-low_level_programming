#include "main.h"
/**
 * create_file - create a file
 * @filename: name of new file
 * @text_content: if it exists, do nothing
 * Return: 1 if success and -1 if not
 */
int create_file(const char *filename, char *text_content)
{
int fd, len, wr;
if (filename == NULL)
{
return (-1);
}
len = 0;
if (text_content != NULL)
{
while (text_content[len] != '\0')
len++;
}
fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
wr = write(fd, text_content, len);
if (fd < 0)
{
return (-1);
}
if (wr < 0)
{
return (-1);
}
close(fd);
return (1);
}
