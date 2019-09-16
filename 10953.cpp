#include <stdio.h>

int main(void)
{
	int T;
	int a, b;
	scanf("%d", &T);
	
	for(int i = 0; i < T; ++i){
		scanf("%d %*c %d", &a, &b);
		printf("%d\n", a + b);
	}
	
	return 0;
}
