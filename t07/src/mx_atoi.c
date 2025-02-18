#include "minilibmx.h"
#include <stdbool.h>

int mx_atoi(const char *src) {
	if (!src) return 0;

	unsigned int result = 0;
	int sign = 1;

	while (mx_isspace(*src)) {
		src++;
	}
	if (*src == '-' || *src == '+') {
		if (*src == '-') {
			sign = -1;
		}
		src++;
	}
	while (mx_isdigit(*src)) {
		result = result * 10 + (*src - '0');
		src++;
	}
	if (sign == -1) {
		return -((int)(result % 4294967296U));
	}
	else {
		return (int)(result % 4294967296U);
	}
}

