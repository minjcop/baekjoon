#include <iostream>

using namespace std;

int main(void){
    int a[20] = { 0, };
    int n, s;
    cin >> n >> s;

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    int ans = 0;
    for(int i = 1; i < (1 << n); ++i){ // 모든 부분집합을 고려하는 경우의 수.
        int sum = 0;
        for(int k = 0; k < n; ++k){ // 해당되는 부분집합의 경우에 수에 맞는 배열의 수열을 더해준다.
            if(i & (1 << k)){
                sum += a[k];
            }
        }
        if(sum == s)
            ans++;
    }
    cout << ans << '\n';
	return 0;
}
