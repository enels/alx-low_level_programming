#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates 2 strs
 * @s1: str 1
 * @s2: str 2
 *
 * Return: concatenated str
 */ 
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int s1_len = 0, s2_len = 0;
	int total_s1_s2_len = 0, index = 0;

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	total_s1_s2_len = s1_len + s2_len;
	if (total_s1_s2_len == 0)
	{
		return ("");
	}

	total_s1_s2_len++; /* for null string */
	new_str = malloc(sizeof(char) * total_s1_s2_len); 
	if (new_str != NULL)
	{
		while (*s1 != '\0')
		{
			if (*s1 != '\0')
			{
				new_str[index] = *s1;
				s1++;
				index++;
			}
		}
		while (*s2 != '\0')
		{
			if (*s2 != '\0')
			{
				new_str[index] = *s2;
				s2++;
				index++;
			}
		}
	}
	else
	{
		return (NULL);
	}
	new_str[index] = '\0';
	return (new_str);
}
