#include <stdlib.h>
#include <string.h>


/**
 * string_nconcat - concantenates 2 strings
 * @s1: first str
 * @s2: second str
 * @n: number of s2 that will be present in newly formd str
 *
 * Return: pointer to newly formed string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = strlen(s1); /* get len of s1 */
	unsigned int s2_len = strlen(s2); /* get len of s2 */
	unsigned int index;
	char *new_str;

	if (n > s2_len || n == s2_len) /* if n is equal to or grt than s2 len */
	{
		new_str = malloc(sizeof(char) * (s1_len + s2_len));
	}
	else /* if n is less than s2 len */
	{
		new_str = malloc(sizeof(char) * (s1_len + n));
		s2_len = n;
	}
	
	if (new_str != NULL)
	{
		for (index = 0; index < s1_len; index++)
		{
			new_str[index] = *s1; /* store the entire s1 */
			s1++;
		}
		s2_len += s1_len; /* makes starting point of s2 begins from s2 */
		for (; index < s2_len; index++)
		{
			new_str[index] = *s2;
			s2++;
		}
	}
	else
	{
		return (NULL);
	}

	return (new_str);
}
