#include <stdio.h>
#include "mathhelper.h"

int main(void)
{
	unsigned long long i = 1;
	unsigned nr = 0;
	while (nr < 10001) {
		if (is_prime(++i)) {
			++nr;
			printf("the %u prime is %llu\n", nr, i);
		}
	}
	printf("%llu\n", i);
	return 0;
}
