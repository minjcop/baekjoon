#include <stdio.h>

long long fact(int a);
long long fact2(int a, int b);
int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	printf("%lld", fact2(n, m)/fact(m));
	return 0;
}

long long fact(int a){
	int i;
	long long ret = 1;
	for(i = 1; i <= a; i++){
		ret *= i;
	}
	return ret;
}

long long fact2(int a, int b){
	int i;
	long long ret = 1;
	for(i = b + 1; i <= a; i++){
		ret *= i;
	}
	return ret;
}
