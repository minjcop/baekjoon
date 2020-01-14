#include <iostream>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;

	int a[1001] = { 0, };
	int dp[1001] = { 0, };

	for(int i = 1; i <= n; ++i){
        cin >> a[i];
	}

	//index : 1 ~ n
	int result = 2; // 1이 입력될경우에도 1이 나와야 함.
	for(int index = 1; index <= n; ++index){
        int max1 = 1, max2 = 1;
        for(int i = 1; i <= n; ++i){
            dp[i] = 1;
        }

        for(int i = 1; i <= index; ++i){
            for(int j = i+1; j <= index; ++j){
                if(a[i] < a[j] && dp[i] >= dp[j]){
                    dp[j] = dp[i] + 1;
                    if(max1 < dp[j])
                        max1 = dp[j];
                }
            }
        }
        dp[index] = 1;
        for(int i = index; i <= n; ++i){
            for(int j = i+1; j <= n; ++j){
                if(a[i] > a[j] && dp[i] >= dp[j]){
                    dp[j] = dp[i] + 1;
                    if(max2 < dp[j])
                        max2 = dp[j];
                }
            }
        }
        if(result < max1 + max2){
            result = max1 + max2;
        }
	}

    cout << result-1;

	return 0;
}
