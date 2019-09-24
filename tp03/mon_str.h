#ifndef __MON_STR_H__
#define __MON_STR_H__
int mon_strlen(char[] s);
int mon_strlen(const char *s);
int mon_strcmp(const char *cs, const char *ct);
int mon_strncmp(const char *cs, const char *ct, int count);
char *mon_strcat(char *dest, const char *src);
char *mon_strchr(char *s, int c);
char *mon_strstr(const char *s1, const char *s2);
#endif