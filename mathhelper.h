#include <math.h>
#include <stdbool.h>

#define fib(n) rfib(n-1, 1, 1)

unsigned long long rfib(int n, unsigned long long p, unsigned long long pp);
bool is_prime(unsigned long long n);

bool is_prime(unsigned long long n)
{
	if (n < 2)
		return false;
	if (n == 2)
		return true;
	double sqr = sqrt(n);
	unsigned long long i;
	for (i = 2; i <= sqr; ++i)
		if (!(n % i))
			return false;
	return true;
}

unsigned long long rfib(int n, unsigned long long p, unsigned long long pp)
{
	if (n <= 1)
		return p;
	return rfib(n-1, p + pp, p);
}
