#include <stdio.h>

int main(void)
{
	const char number[] = "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";
	int i, j;
	unsigned prod;
	unsigned max = 0;
	int a[5];
	for (i = 0; number[i+4]; ++i) {
		for (j = 0; j < 5; ++j) {
			switch (number[i+j]) {
				case '0':
					a[j] = 0;
					break;
				case '1':
					a[j] = 1;
					break;
				case '2':
					a[j] = 2;
					break;
				case '3':
					a[j] = 3;
					break;
				case '4':
					a[j] = 4;
					break;
				case '5':
					a[j] = 5;
					break;
				case '6':
					a[j] = 6;
					break;
				case '7':
					a[j] = 7;
					break;
				case '8':
					a[j] = 8;
					break;
				case '9':
					a[j] = 9;
					break;
			}
		}
		prod = a[0] * a[1] * a[2] * a[3] * a[4];
		if (prod > max)
			max = prod;
	}
	printf("%u\n", max);
	return 0;
}
