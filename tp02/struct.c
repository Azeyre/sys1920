#include <stdio.h>
#include "struct.h"

struct rat rat_produit(struct rat n1, struct rat n2)
{
	struct rat n;
	n.den = n1.den * n2.den;
	n.num = n1.num * n2.num;
	return n;
}

