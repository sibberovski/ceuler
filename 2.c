#include <stdio.h>

int main(void)
{
	unsigned ans = 0;
	unsigned f;
	int i = 1;
	while ((f = fib(i++)) < 4000000)
		if (!(f % 2))
			ans += f;
	printf("%u\n", ans);
	return 0;
}
