#include <stdio.h>

int main(void)
{
	unsigned a, b, c;
	for (c = 998; c > 2; --c)
		for (b = 499; b > 1; --b)
			for (a = 332; a > 0; --a)
				if (a*a + b*b == c*c && a+b+c == 1000) {
					printf("%u\n", a*b*c);
					return 0;
				}
	return 0;
}
