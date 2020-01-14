#include <iostream>

using namespace std;

int a[1001] = { 0, };
int dp[1001] = { 0, };

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	for(int i = 1; i <= n; ++i){
        cin >> a[i];
        dp[i] = 1;
	}

	for(int i = 1; i <= n; ++i){
        for(int j = i+1; j <= n; ++j){
            if(a[i] > a[j] && dp[i] >= dp[j]){
                dp[j] = dp[i] + 1;
            }
        }
	}

	int result = 0;
	for(int i = 1; i <= n; ++i){
        if(dp[i] > result)
            result = dp[i];
	}

	cout << result;
	return 0;
}
