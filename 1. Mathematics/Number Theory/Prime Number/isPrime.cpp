#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int n)
{
	if(n<2)
		return false;
	else if(n==2)
		return false;
	int sq = sqrt(n)+1;
	for(int i=2; i<=sq; i++)
	{
		if(n%i == 0)
			return false;
	}
	return true;
}

int main()
{
	int n;
	scanf("%d", &n);

	if(isPrime(n))
		printf("The number is prime.\n");
	else
		printf("The number is composite.\n");

	return 0;
}
