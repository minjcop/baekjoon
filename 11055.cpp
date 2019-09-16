#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	
	int i, j;
	int a[1001] = { 0, };
	int dp[1001] = { 0, };
	for(i = 1; i <= n; ++i){
		cin >> a[i];
		dp[i] = a[i];
	}
	
	int maxdp = 0;
	for(i = 2; i <= n; ++i){
		for(j = 1; j <= i-1; ++j){
			if(a[j] < a[i]){ //앞의 수(j)가 뒤의 수(i)보다 작으면
				if(maxdp < dp[j]){
					maxdp = dp[j];
				}	
			}	
		}
		dp[i] += maxdp; // 만약 어떤수도 작지않다면 0을 더하게 된다.
		maxdp = 0; // 다음 경우를 위해서 초기화 
	}
	
	for(i = 1; i <= n; ++i){
		if(dp[i] > maxdp)
			maxdp = dp[i];
	}
	
	cout << maxdp << endl;
				
	return 0;
}
