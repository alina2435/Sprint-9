#include <unistd.h>
#include "minilibmx.h"

void mx_printerr(const char *s) {
	if (!s) return;
	write (2, s, mx_strlen(s));
}

