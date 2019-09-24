#include <stdio.h>
#include "autres.h"

int main(void)
{
	int tableau[4] = {10, 23, 1, 45};
	int tab2[25] = {10, 10, 10, 10, 10};
	afficher(tableau, 4);
	printf("Somme du tableau = %d\n", somme(tableau, 4));
	copie_apres(tab2, 5, tableau, 4);
	afficher(tab2, 9);
	return 0;
}
