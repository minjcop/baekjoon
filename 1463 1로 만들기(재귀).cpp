#include <iostream>

using namespace std;

int dp[1000001] = { 0, }; // 여기에는 연산을 하는 최솟값이 저장한다. 최솟값인지 계속 확인하면서 갱신.

int func(int n){
    if(n <= 3 || dp[n]){ // n <= 3이거나, dp[n]이면 저장된 값이 있으므로.
        return dp[n];
    }else{ // (dp[n] == 0)0이 저장되어 있으면 메모이제이션으로 되있지 않은 것.
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
