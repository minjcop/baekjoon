#include <iostream>

using namespace std;

int dp[1000001] = { 0, }; // ���⿡�� ������ �ϴ� �ּڰ��� �����Ѵ�. �ּڰ����� ��� Ȯ���ϸ鼭 ����.

int func(int n){
    if(n <= 3 || dp[n]){ // n <= 3�̰ų�, dp[n]�̸� ����� ���� �����Ƿ�.
        return dp[n];
    }else{ // (dp[n] == 0)0�� ����Ǿ� ������ �޸������̼����� ������ ���� ��.
        int temp = func(n-1) + 1;

        if(n % 3 == 0){
            if(temp > func(n/3) + 1)
            temp = func(n/3) + 1;
        }

        if(n % 2 == 0){
            if(temp > func(n/2) + 1){
                temp = func(n/2) + 1;
            }
        }

        dp[n] = temp;
        return temp;
    }
}

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    dp[1] = 0;
    dp[2] = dp[3] = 1;

    int n;
    cin >> n;
    cout << func(n) << "\n";

    return 0;
}
