#include <stdio.h>

int main(void)
{
	int n;
	int dp[2][1001] = { 0, };
	int a[1001] = { 0, };
	scanf("%d", &n);
	
	int i, j;
	
	for(i = 1; i <= n; ++i){
		scanf("%d", &a[i]);
		for(j = 0; j <= 1; ++j){
			dp[j][i] = 1;
		}
	}
	
	int maxdp = 1;
	for(int i = 2; i <= n; ++i){
		for(j = 1; j <= i-1; ++j){
			if(a[i] > a[j]){
				if(maxdp < dp[0][j]){
					maxdp = dp[0][j];
				}	
				dp[0][i] = maxdp + 1;
			}
			
		}	
		
		maxdp = 1;
	}
	
	for(int i = n-1; i >= 1; --i){
		for(j = i+1; j >= 2; --j){
			if(a[i] > a[j]){
				if(maxdp < dp[1][j]){
					maxdp = dp[1][j];
				}
				dp[1][i] = maxdp + 1;
			}
		}
		maxdp = 1;
	}
	
	int result = 0;
	for(i = 1; i <= n; ++i){
		printf("%d %d\n", dp[0][i], dp[1][i]);
		if(result < dp[0][i] + dp[1][i])
			result = dp[0][i] + dp[1][i];
		
	}
	
	printf("%d", result - 1);
	
	return 0;
}
