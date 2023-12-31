
/**
 * _strlen_recursion - Find length of a string
 * @s: a string
 * Return: Length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
