#include <iostream>
#include <algorithm> // min

using namespace std;

int dp[100001] = { 0, };

int func(int n);

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    dp[1] = 1;

    for(int i = 2; i <= n; ++i){
        dp[i] = i; // �ִ�. 1�� �������� �� ������ ��.
    }

    cout << func(n);
}

int func(int n){
    if(n == 1 || dp[n] != n){
        return dp[n]; // dp[1] = 1 �̰ų�, dp[n] != n�� �ƴ� ���� �ùٸ� dp���� ������ ��.
    }
    for(int i = 1; i*i <= n; ++i){
        dp[n] = min(dp[n], func(n-i*i) + 1);
    }
    return dp[n];
}
