#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: file content.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nlet;
	int rw;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
	{
	return (-1);
	}

	if (!text_content)
	{
	text_content = "";
	}

	for (nlet = 0; text_content[nlet]; nlet++)
		;

	rw = write(fd, text_content, nlet);

	if (rwr == -1)
		return (-1);

	close(fd);

	return (1);
}
