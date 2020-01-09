#include <iostream>
#include <algorithm>

using namespace std;

int a[10] = { 0, };
int result[10] = { 0, };

void func(int index, int n, int m);
int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    sort(a, a+n);
    func(0, n, m);

	return 0;
}

void func(int index, int n, int m){
    if(index == m){
        for(int i = 0; i < m; ++i){
            cout << result[i] << " ";
        }
        cout << "\n";
        return ;
    }
    for(int i = 0; i < n; ++i){
        result[index] = a[i];
        func(index+1, n, m);
    }
}
