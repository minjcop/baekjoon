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
        // n = 900 �̶��, i = 1�϶� 900 i = 10�϶� 891 i = 100�϶� 801
        // i = 1�϶� ���ڸ��� �ִ� �͵� ���� �߰�.
        // i = 10�϶� �����ڸ��� �ִ� �͵� ���� �߰�
        // i = 100�϶� �����ڸ��� �ִ� �͵� ��� �߰�.
        sum += n - i + 1;
	}
	cout << sum;

	return 0;
}
