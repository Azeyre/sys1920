#include <stdio.h>

void afficher(int tab[], int taille)
{
	for(int i = 0 ; i < taille ; i++)
	{
		printf("%d\n", tab[i]);
	}
}

int somme(int tab[], int taille)
{
	int total = 0;
	for(int i = 0 ; i < taille ; i++)
	{
		total += tab[i];
	}
	return total;
}

void copie_dans(int dest[], int src[], int taille)
{
	for(int i = 0 ; i < taille ; i++)
	{
		dest[i] = src[i];
	}
}

void copie_apres(int dest[], int taille_d, int src[], int taille_s)
{
	for(int i = 0 ; i < taille_s ; i++)
	{
		dest[taille_d + i] = src[i];
	}
}
