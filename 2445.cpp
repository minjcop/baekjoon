#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	//i : 1 ~ 5
	// i 10-2i i
	int i, j;
	for(i = 1; i <= n; ++i){
		for(j = 1; j <= i; ++j)
			printf("*");
		for(j = 1; j <= 2 * n - 2 * i; ++j)
			printf(" ");
		for(j = 1; j <= i; ++j)
			printf("*");
		printf("\n");
	}
	for(i = n - 1; i >= 1; --i){
		for(j = 1; j <= i; ++j)
			printf("*");
		for(j = 1; j <= 2 * n - 2 * i; ++j)
			printf(" ");
		for(j = 1; j <= i; ++j)
			printf("*");
		printf("\n");
	}
		
	return 0;
}
