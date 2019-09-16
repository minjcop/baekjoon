#include <iostream>

using namespace std;

int main(void)
{
	int n;
	scanf("%d", &n);
	
	// i : 1 ~ n
	// 공백 : n - i 
	// i 의 개수만큼 *(공백)출력.
	int i, j;
	for(i = 1; i < n; ++i){
		for(j = 1; j <= n - i; ++j)
			printf(" ");
		for(j = 1; j <= i; ++j)
			printf("* ");
		printf("\n");
	}
	return 0;
}
