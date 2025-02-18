#ifndef MINILIBMX_H
#define MINILIBMX_H

#include <stdbool.h>

bool mx_isspace(char c);
bool mx_isdigit(int c);
void mx_printchar(char c);
void mx_printint(int n);
void mx_printstr(const char *s);
void mx_printerr(const char *s);
int mx_strlen(const char *s);
int mx_atoi(const char *src);

#endif

