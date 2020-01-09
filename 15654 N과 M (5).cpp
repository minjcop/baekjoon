#include <iostream>
#include <algorithm>

using namespace std;

int a[10] = { 0, };
bool check[10001] = { 0, }; // check[a[i]]
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
	sort(a, a + n);
	func(0, n, m);

	return 0;
}

void func(int index, int n, int m){
    if(index == m){
        for(int i = 0; i < m; ++i){
            cout << result[i] << " ";
        }
        cout << '\n';
        return ;
    }

    for(int i = 0; i < n; ++i){
        if(check[a[i]])
            continue;
        check[a[i]] = true;
        result[index] = a[i];
        func(index+1, n, m);
        check[a[i]] = false;
    }
}
