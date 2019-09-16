#include <iostream>

using namespace std;

int zegob(int b){
	int a = 3;
	for(int i = 1; i <= b; ++i){
		a = a * a;
	}
	return a;
}
int main(void)
{
	int n;
	cin >> n;
	
	int dp[31] = { 0, };
	
	dp[2] = 3;
	dp[4] = 11;
	
	if(n % 2 == 1){
		cout << 0 << endl;
	}else{
		int i;
		int number = 0;
		for(i = 6; i <= n; i = i + 2){
			number = 0;
			for(int j = 0; j <= i; j = j + 2){
				for(int k = i; k > 0; k = k - 2){
					if(j == 0){
						number = zegob(i/2);
					}else if(j == 2 || k == 2){
						number += 6;
					}else if(j == k){
						number += 4;
					}else{
						number += 4;
					}
				}
			}
			number += 2;
			dp[i]= number;
		}
		cout << dp[n] << endl;
	}
	
	return 0;
}
