#include <iostream>

using namespace std;

int main(void)
{
	long long ar[101][10] = { 0, }; // [N][L] 길이가 N이고 L로 끝나는 수.
	int i;
	
	int n;
	cin >> n;
	long long sum = 0;
	
	for(i = 1; i <= 9; ++i){
		ar[1][i] = 1; // ar[1][0] = 0;
	}
	// 10 89
	
	for(i = 2; i <= 100; ++i){
		ar[i][0] = ar[i - 1][1] % 1000000000;
		ar[i][9] = ar[i - 1][8] % 1000000000;
		for(int j = 1; j <= 8; ++j){
			ar[i][j] = (ar[i - 1][j + 1] + ar[i - 1][j - 1]) % 1000000000;// i는 1 ~ 8
		}
	}
	
	for(i = 0; i <= 9; ++i)	{
		sum += ar[n][i];
		sum = sum % 1000000000;
	}
	
	cout << sum << endl;
	return 0;
}
