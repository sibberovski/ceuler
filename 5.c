#include <stdio.h>

int main(void)
{
	unsigned i = 20;
	unsigned char j;
	while (i++) {
		for (j = 1; j <= 20; ++j) {
			if (i % j)
				break;
			if (j == 20) {
				printf("%u\n", i);
				return 0;
			}
		}
	}
	return 0;
}
