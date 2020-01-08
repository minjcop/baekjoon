#include <iostream>

using namespace std;

typedef long long ll;
int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	ll sum = 0;
	for(int i = 1; i <= n; i *= 10){
        // n = 900 이라면, i = 1일때 900 i = 10일때 891 i = 100일때 801
        // i = 1일때 한자리수 있는 것들 전부 추가.
        // i = 10일때 십의자리수 있는 것들 전부 추가
        // i = 100일때 백의자리수 있는 것들 모두 추가.
        sum += n - i + 1;
	}
	cout << sum;

	return 0;
}
