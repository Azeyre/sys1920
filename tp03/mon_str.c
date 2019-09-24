#include <stdio.h>
#include "mon_str.h"

int mon_strlen(const char *s)
{
	const char *sc;

	for(sc = s ; *sc != '\0' ; ++sc);
	return sc - s;
}

int mon_strcmp(const char *cs, const char *ct)
{
	unsigned char c1, c2;

	while (1) {
		c1 = *cs++;
		c2 = *ct++;
		if (c1 != c2)
			return c1 < c2 ? -1 : 1;
		if (!c1)
			break;
	}
	return 0;
}

int mon_strncmp(const char *cs, const char *ct, int count)
{
	unsigned char c1, c2;

	while (count) {
		c1 = *cs++;
		c2 = *ct++;
		if (c1 != c2)
			return c1 < c2 ? -1 : 1;
		if (!c1)
			break;
		count--;
	}
	return 0;
}

char *mon_strcat(char *dest, const char *src)
{
	char *tmp = dest;

	while (*dest)
		dest++;
	while ((*dest++ = *src++) != '\0');
	return tmp;
}

char *mon_strchr(char *s, int c)
{
	for (; *s != (char)c; ++s)
		if (*s == '\0')
			return NULL;
	return (char *)s;
}

char *mon_strstr(const char *s1, const char *s2)
{
	int l1, l2;

	l2 = mon_strlen(s2);
	if (!l2)
		return (char *)s1;
	l1 = mon_strlen(s1);
	while (l1 >= l2) {
		l1--;
		if (!mon_strncmp(s1, s2, l2))
			return (char *)s1;
		s1++;
	}
	return NULL;
}