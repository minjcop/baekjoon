#include <iostream>

using namespace std;

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
        a[index] = i;
        func(index+1, n, m);
    }
}
