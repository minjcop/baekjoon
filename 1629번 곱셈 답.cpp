#include <iostream>
#include <cstdio>

using namespace std;

int a, b, c;

int power(int n, int k)
{
	if(k == 0) return 1;
	
	int temp = power(n, k/2);
	int result = 1LL * temp * temp % c;
	if(k % 2 == 1)
		result = 1LL * temp * temp * n % c;
	return result;
}

int main(void)
{
	cin >> a >> b >> c;
	printf("%d", power(a, b));
	return 0;
}
