#include <iostream>

using namespace std;

int main(void)
{
	int n;
	int x;
	scanf("%d", &n);
	int max = -1000000;
	int min = 1000000;
	for(int i = 0; i < n; ++i){
		scanf("%d", &x);
		if(x > max)
			max = x;
		if(x < min)
			min = x;
	}
	
	printf("%d %d", min, max);

	return 0;
}
