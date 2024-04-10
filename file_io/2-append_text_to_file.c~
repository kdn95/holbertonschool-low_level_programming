#include "main.h"
/**
 * append_text_to_file - append text to file
 * @filename: name of file
 * @text_content: strings to append to file
 * Return: 1 if success or -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
  int fd, wr, length;
if (filename == NULL)
{
return (-1);
}
length = 0;
if (text_content != NULL)
{
while (text_content[length] != '\0')
length++;
}
fd = open(filename, O_RDWR | O_EXCL | O_APPEND, 0644);
if (fd < 0)
{
return (-1);
}
wr = write(fd, text_content, length);
if (wr < 0)
{
return (-1);
close(fd);
}
close(fd);
return (1);
}
