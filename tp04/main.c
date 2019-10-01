#include <stdio.h>
#include "dyna.h"

int main(void)
{
    char c[] = "Bonjour oui";
    printf("%s\n", miroir(c));
    printf("%s\n", saisie());
    return 0;
}