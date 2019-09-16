#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	int i, j, k;
	// i가 1부터 시작
	// n-i 2i-1 n-i 
	for(i = 1; i <= n; ++i){
		for(j = 1; j <= n - i; ++j)
			printf(" ");
		for(k = 1; k <= 2 * i - 1; ++k)
			printf("*");
		printf("\n");
	}	
	
	return 0;
}
