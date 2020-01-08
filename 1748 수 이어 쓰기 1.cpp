#include <iostream>

using namespace std;

typedef long long ll;

int sizeint(int n);
int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	ll sum = 0;
	for(int i = 1; i <= n; ++i){
        sum += sizeint(i);
	}

	cout << sum;
	return 0;
}

int sizeint(int n){
    int ret = 0;
    while(n){
        n /= 10;
        ret++;
    }
    return ret;
}
