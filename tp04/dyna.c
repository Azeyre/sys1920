#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "dyna.h"

char * miroir(const char *s)
{
    int length = strlen(s);
    char *arrays = malloc(sizeof(char) * length);
    if(arrays == NULL) return NULL;
    char *tmp = arrays;
    char c1;
    int i = 0;
    while(*s != '\0')
    {
        s++;
        i++;
    }
    while (i > 0)
    {
        i--;
        s--;
        c1 = *s;
        *arrays = c1; 
        arrays++;
    }
    *arrays = '\0';
    return tmp;
}

char * saisie()
{
    int taille = 10;
    char *arrays = malloc(sizeof(char) * taille);
    if(arrays == NULL) return NULL;

    char c;
    char *tmp = arrays;
    int i = 0;
    int tmpTaille = taille;
    while(!isspace(c = getchar())){
        *arrays = c;
        arrays++;
        i++;
        if(i >= tmpTaille){
            arrays = (char *) realloc(tmp, tmpTaille + sizeof(char) * taille);
            tmpTaille += taille;
            tmp = arrays;
            arrays += i;
        }
    }
    *arrays = '\0';
    arrays = (char *) realloc(tmp, sizeof(char) * strlen(tmp));
    return tmp;
}