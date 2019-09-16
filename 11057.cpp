#include <iostream>
#define MOD 10007

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	
	long long ar[1001][10] = { 0, }; // [N][L] : N�� ���� ����, L�� ������ ����.
	int i;
	for(i = 0; i <= 9; ++i){
	 	ar[1][i] = 1; // ���� ���� 1�� �� ����. 
	}
	
	//���� ���� 2���� n���� ���� 
	//��� 1000�� n�� �ٲ㵵 �ȴ� n�ΰ͸����ϸ�Ǵϱ�. 
	for(i = 2; i <= n; ++i){
		for(int j = 0; j <= 9; ++j){
			for(int k = j; k <= 9; ++k){
				ar[i][j] += ar[i - 1][k];
				ar[i][j] = ar[i][j] % MOD;
			}
		}
	}
	
	long long sum = 0;
	//���� ���� n�� ���� ����.
	for(i = 0; i <= 9; ++i){
		sum += ar[n][i];
		sum = sum % MOD;
	}
	
	cout << sum << endl;
	
	return 0;
}
