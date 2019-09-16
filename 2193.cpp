#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	
	int ar[91][2] = { 0, };
	
	ar[1][1] = 1; // ar[1][0] = 0;
	
	for(int i = 2; i <= n; ++i){
		ar[i][1] += ar[i-1][0];
		ar[i][0] += ar[i-1][0] + ar[i-1][1];
	}
	
	int sum = 0;
	sum += ar[n][0] + ar[n][1];
	cout << sum;

	return 0;
}

