#include <unistd.h>
#include "printerr.h"

void mx_printerr(const char *s) {
	if (!s) return;
	write (2, s, mx_strlen(s));
}

