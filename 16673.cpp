#include <iostream>
#include <cmath>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k, p;
	cin >> n >> k >> p;

	int sum = 0;
	for(int i = 1; i <= n; ++i){
        sum += k*i + p*pow(i, 2);
	}

	cout << sum;

	return 0;
}
