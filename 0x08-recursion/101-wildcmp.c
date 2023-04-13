/**
 * wildcmp - Compares two strings and returns 1 if considered identical
 * @s1: Pointer to first string.
 * @s2: Pointer to second string
 * Return: 1 if s1 and s2 are identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
    /* Base cases */
	if (*s1 == '\0' && *s2 == '\0') /* Both strings are empty */
		return (1);
	else if (*s2 == '*' && *(s2 + 1) == '\0') /* s2 is a single asterisk */
		return (1);
	else if (*s1 == *s2) /* Current characters match */
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*') /* Current character in s2 is an asterisk */
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	else /* Current characters do not match */
		return (0);
}

