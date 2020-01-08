#include <iostream>

using namespace std;

bool check[10] = { 0, };
int a[10] = { 0, };

void func(int index, int n, int m);
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    func(0, n, m);

    return 0;
}

void func(int index, int n, int m){
    if(index == m){
        for(int i = 0; i < m; ++i){
            cout << a[i] << " ";
        }
        cout << "\n";
        return ;
    }

    for(int i = 1; i <= n; ++i){
        if(check[i]) // 이미 사용된 경우 다음으로 넘어감.
            continue;
        check[i] = true; // 아직 사용되지 않은 경우 저장하고 사용했다고 표시해줌.
        a[index] = i;
        func(index+1, n, m);
        check[i] = false; // 재귀 다 돌아가서 모두 다 사용했으면. 모두 false로
    }
}
