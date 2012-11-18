#include <stdio.h>
#include "mathhelper.h"

#define TEST_CONSTANT 600851475143

int main(void)
{
	unsigned long long test = (unsigned long long)sqrt(TEST_CONSTANT);
	while (test--) {
		if (!(TEST_CONSTANT % test) && is_prime(test)) {
			printf("%llu\n", test);
			return 0;
		}
	}
	return 0;
}
