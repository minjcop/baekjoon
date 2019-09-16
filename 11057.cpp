#include <iostream>
#define MOD 10007

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	
	long long ar[1001][10] = { 0, }; // [N][L] : N은 수의 길이, L은 마지막 숫자.
	int i;
	for(i = 0; i <= 9; ++i){
	 	ar[1][i] = 1; // 수의 길이 1인 것 정의. 
	}
	
	//수의 길이 2부터 n까지 정의 
	//사실 1000과 n을 바꿔도 된다 n인것만구하면되니까. 
	for(i = 2; i <= n; ++i){
		for(int j = 0; j <= 9; ++j){
			for(int k = j; k <= 9; ++k){
				ar[i][j] += ar[i - 1][k];
				ar[i][j] = ar[i][j] % MOD;
			}
		}
	}
	
	long long sum = 0;
	//수의 길이 n인 것을 구함.
	for(i = 0; i <= 9; ++i){
		sum += ar[n][i];
		sum = sum % MOD;
	}
	
	cout << sum << endl;
	
	return 0;
}
