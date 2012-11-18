/* The largest palindrome that is the product of two two-digit numbers is
 * 9009 = 91 * 99. Find the largest palindrome that is the product of two three-
 * digit numbers.
 */

#include <stdio.h>
#include <stdlib.h>

int is_palindrome(unsigned);
int alen(char*);

int main(void)
{
	unsigned a = 999, b = 999;
	unsigned largest = 0;
	unsigned la = 0, lb = 0;
	while (b > 99) {
		a > 99 ? --a : (a = 999, --b);
		if (is_palindrome(a*b) && a*b > largest) {
			la = a;
			lb = b;
			largest = a*b;
		}
	}
	printf("%u * %u = %u\n", la, lb, largest);
	return 0;
}

int is_palindrome(unsigned n)
{
	char number[20];
	int i, j;
	snprintf(number, 10, "%d", n);
	i = alen(number) - 1;
	for (j = 0; j < i / 2 + 1; j++)
		if (!(number[j] == number[i-j]))
			return 0;
	return 1;
}

int alen(char *a)
{
	int i;
	for (i = 0; a[i]; ++i) ;
	return i;
}

