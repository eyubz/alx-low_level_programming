#include "main.h"
#include <string.h>
/**
 * append_text_to_file - append content to text file
 * @filename: name of the file
 * @text_content: null terminated string
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	size_t writeByte;
	int fp;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);
	if (text_content != NULL)
	{
		writeByte = write(fp, text_content, strlen(text_content));
		if (writeByte <= 0)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);
	return (1);
}
