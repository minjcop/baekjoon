#include <iostream>

using namespace std;

int main(void)
{
	int a;
	int b;
	int minSum = 0, manSum = 0;
	for(int i = 0; i < 4; i++){
		cin >> a;
		minSum += a;
	}
	for(int i = 0; i < 4; i++){
		cin >> b;
		manSum += b;
	}
	if( minSum >= manSum)
		cout << minSum;
	else
		cout << manSum;

	return 0;
}
