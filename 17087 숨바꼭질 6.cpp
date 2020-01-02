#include <iostream>
#include <algorithm> // min, max

using namespace std;

int sub(int a, int b);
int gcd(int a, int b);

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, S; // n은 동생의 위치 개수(동생수 (?)) , S는 수빈의 위치.
    int A[100001] = { 0, }; // 동생의 위치.

    cin >> n >> S;

    cin >> A[0];
    int temp = sub(S, A[0]); // 동생과 언니의 거리차이를 하나 저장해놓고 시작.
    for(int i = 1; i < n; ++i){
        cin >> A[i];
        temp = gcd(temp, sub(S, A[i])); // 새로운 거리 차이와 최대공약수 구하는 작업.
    }

    cout << temp;

    return 0;
}

int sub(int a, int b){ // a와 b중 큰수에서 작은수를 빼는 함수.
    return max(a, b) - min(a, b);
}

int gcd(int a, int b){
    int t;

    while(b){
        t = a % b;
        a = b;
        b = t;
    }
    return a;
}
