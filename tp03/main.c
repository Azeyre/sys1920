#include <stdio.h>
#include "mon_str.h"

int main(void)
{
	char c[] = "Bonjour oui";
	char c2[] = "Bonjour non";
	char c3[] = "Bonjour oui";
	char b[] = "our";
	printf("Longueur : %d\n", mon_strlen(c));
	printf("Comparaison : %d\n", mon_strcmp(c, c2));
	printf("Comparaison : %d\n", mon_strcmp(c, c3));
	printf("Comparaison : %d\n", mon_strncmp(c, c2, 6));
	printf("%s\n", mon_strcat(c, c2));
	printf("%s\n", mon_strchr(c3, 'r'));
	printf("%s\n", mon_strstr(c3, b));
	return 0;
}