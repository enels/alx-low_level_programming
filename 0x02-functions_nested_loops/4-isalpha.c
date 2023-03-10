/**
 * _isalpha - checks if its an alphabetic character
 * @c: character to check
 *
 * Return: 1 if alphabetic, else 0
 */

int _isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
