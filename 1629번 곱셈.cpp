#include <iostream>

using namespace std;

int main(void)
{
	int a, b, c;
	long long ret = 1;
	cin >> a >> b >> c;
	int mid = a % c;
	for(int i = 0; i < b; i++){
		ret *= mid;
		ret %= c;
	}
	printf("%lld", ret);
	return 0;
}
