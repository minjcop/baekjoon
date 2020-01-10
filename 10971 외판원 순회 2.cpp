#include <iostream>
#include <algorithm>
#include <vector>

#define MAX 100000000 // 1억

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a[11][11] = { 0, };

	int n;
	cin >> n;
	vector <int> v(n);

	for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> a[i][j];
            if(a[i][j] == 0){
                a[i][j] = MAX;
            }
        }
	}

	for(int i = 0; i < n; ++i){
        v[i] = i;
	}
    int sum;
    int result = MAX;
	do{
        sum = 0;
        for(int i = 0; i < n-1; ++i){
            sum += a[v[i]][v[i+1]];
        }
        sum += a[v[n-1]][v[0]];
        if(result > sum){
            result = sum;
        }
	}while(next_permutation(v.begin()+1, v.end())); // 1 2 3 4와 2 3 4 1 .... 은 같기때문에 시작은 고정시켜도된다.

	cout << result;

	return 0;
}
