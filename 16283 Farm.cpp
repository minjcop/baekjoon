#include <iostream>

using namespace std;

int main(void){
    int a, b, n, w;
    cin >> a >> b >> n >> w;

    int ans1 = 0, ans2 = 0;

    for(int i = 1; i <= n-1; ++i){
        if(a*i + b*(n-i) == w){
            if(ans1 == 0){
                ans1 = i;
                ans2 = n-i;
            }else{ // 2개 이상.
                cout << -1;
                return 0;
            }
        }
    }

    if(ans1 == 0) // 가능한 해가 없을 경우
        cout << -1;
    else
        cout << ans1 << " " << ans2 << endl;

    return 0;
}
