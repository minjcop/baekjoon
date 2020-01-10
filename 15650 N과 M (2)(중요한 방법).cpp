#include <iostream>
using namespace std;
// 어떤 수가 들어갈지 결정하는 방식으로 풀 수 있다. O or X
// (n!보다 2^n이 빠르다.) 따라서 이 방법이 훨씬 좋다.
int a[10] = { 0, };
void go(int index, int selected, int n, int m){
    // index : index라는 수를 결과에 넣을것인지 아닌지
    // selected : 지금까지 선태한 수의 개수.
    if(selected == m){
        for(int i = 0; i < m; ++i){
            cout << a[i] << " ";
        }
        cout << "\n";
        return ;
    }
    if(index > n) return; // 선택할 것이 없다.
    a[selected] = index;
    go(index+1, selected+1, n, m); // 포함.
    a[selected] = 0;
    go(index+1, selected, n, m); // 포함안함.

}

int main(void){
    int n, m;
    cin >> n >> m;

    go(1, 0, n, m);
    return 0;
}
