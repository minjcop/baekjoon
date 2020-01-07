#include <iostream>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a[1001] = { 0, };
	int dp[1001] = { 0, };

    int n;
    cin >> n;

    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        dp[i] = a[i];
    }

    for(int i = 2; i <= n; ++i){
        int max = 0;
        for(int j = 1; j <= i - 1; ++j){
            if(a[i] > a[j] && dp[j] > max){ // a[i]가 i인덱스 전의 수보다 크면
                max = dp[j];
            }
        }
        dp[i] += max;
    }

	int result = 0;
	for(int i = 1; i <= n; ++i){
        if(result < dp[i])
            result = dp[i];
	}

	cout << result;

	return 0;
}
