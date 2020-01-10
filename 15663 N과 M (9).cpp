#include <iostream>
#include <algorithm>

using namespace std;

int n, m;
int a[10] = { 0, };
int result[10] = { 0, };
bool check[10] = { 0, };

void func(int index);
int main(void){

    cin >> n >> m;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    sort(a, a+n);
    func(0);
    return 0;
}


void func(int index){
    if(index == m){
        for(int i = 0; i < m; ++i){
            cout << result[i] << " ";
        }
        cout << "\n";
        return ;
    }

    bool used[10001] = { 0, };
    for(int i = 0; i < n; ++i){
        if(check[i] || used[a[i]])
            continue;
        check[i] = true;
        used[a[i]] = true;
        result[index] = a[i];
        func(index+1);
        check[i] = false;
    }
}
