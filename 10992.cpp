#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	int i, j;
	
	for(i = 1; i < n; ++i)
		printf(" ");
	if(n != 1)
		printf("*\n");
	//i : 2 ~ n-1
	// n-j번의 공백 
	for(i = 2; i < n; ++i){
		for(j = 1; j <= n - i; ++j)
			printf(" ");
		printf("*");
		for(j = 1; j <= 2 * i - 3; j++)
			printf(" ");
		printf("*\n");
	}
	
	for(i = 1; i <= 2 * n - 1; ++i)
		printf("*");
	return 0;
}
