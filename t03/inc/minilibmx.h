#ifndef MINILIBMX_H
#define MINILIBMX_H

#include <stdbool.h>

void mx_printchar(char c);
void mx_printint(int n);
void mx_printstr(const char *s);
char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
int mx_strcmp(const char *s1, const char *s2, int n);
bool mx_isdigit(int c);
bool mx_isspace(int c);
int mx_atoi(const char *src);

#endif

