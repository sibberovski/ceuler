#include <stdio.h>

#define square(n) n*n

int main(void)
{
	int sum_of_squares = 0;
	int square_of_sum = 0;
	unsigned char i;
	for (i = 1; i <= 100; ++i) {
		sum_of_squares += square(i);
		square_of_sum += i;
	}
	square_of_sum = square(square_of_sum);
	printf("%d\n", square_of_sum - sum_of_squares);
	return 0;
}
