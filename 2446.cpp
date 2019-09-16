#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	
	//i : 1 ~ n
	// i-1 2*n+1-2*i
	int i, j;
	for(i = 1; i <= n; ++i){
		for(j = 1; j <= i - 1; ++j)
			printf(" ");
		for(j = 1; j <= 2 * n + 1 - 2 * i; ++j)
			printf("*");
		printf("\n");
	}
	for(i = n - 1; i >= 1; --i){
		for(j = 1; j <= i - 1; ++j)
			printf(" ");
		for(j = 1; j <= 2 * n + 1 - 2 * i; ++j)
			printf("*");
		printf("\n");
	}
	return 0;
}
