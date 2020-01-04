#include <iostream>
#include <stack> // vector

using namespace std;

int a[1001] = { 0, };
int dp[1001] = { 0, };  // dp[n]은 n까지 가장 긴 증가하는 부분 수열.
int V[1001] = { 0, }; // dp[n]이 어디서 증가했는지를 저장해준다. V[n] = 0 이면 dp[n] = 1인것.

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    stack <int> s;

    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        dp[i] = 1;
    }

    for(int i = 1; i <= n - 1; ++i){ // 조사하는 수 이전의 수
        int x = 0;
        for(int j = i + 1; j <= n; ++j){ // 조사하는 수
            if(a[i] < a[j] && dp[i] >= dp[j]){ // a[i]가 a[j]보다 작아서 증가하는 부분 수열이고, dp[j]보다 dp[i]가 크거나같으면 j = i+1이므로 커진다.
                dp[j] = dp[i] + 1;
                V[j] = i;
            }
        }
    }

    int result = 0; // 가장 긴 증가하는 부분수열
    int resultIndex = 0; // 가장 긴 증가하는 부분수열의 제일 끝에 저장된 인덱스.
    for(int i = 1; i <= n; ++i){
        if(result < dp[i]){
            result = dp[i];
            resultIndex = i;
        }
    }


    // resultIndex부터 거꾸로 따라가서 배열에 저장하고, 그 배열을 뒤집어서 결과값을 출력.
    // 위의 방식보다 스택을 stack <int> s;사용하는 것이 더 편할듯.
    for(int i = 0; i < result; ++i){ // result의 수, 즉 증가수열의 수만큼 스택에 푸쉬하면 됨.
        s.push(a[resultIndex]);
        resultIndex = V[resultIndex];
    }

    cout << result << "\n";

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
