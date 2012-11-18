#include <stdio.h>

int main(void)
{
	int i;
	int res = 0;
	for (i = 0; i < 1000; ++i)
		if (!(i % 3) || !(i % 5))
			res += i;
	printf("%d\n", res);
	return 0;
}
