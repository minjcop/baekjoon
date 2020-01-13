#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int diff(int a, int b){
    if(a>b)
        return a-b;
    else
        return b-a;
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	int a[21][21] = { 0, };
	vector <int> v(n);

	for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> a[i][j];
        }
	}

	for(int i = 0; i < n/2; ++i){
        v[i] = 0;
	}
	for(int i = n/2; i < n; ++i){
        v[i] = 1;
	}

	int result = 100000000;
	do{
        int sum1 = 0, sum2 = 0;
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j){
                if(v[i] == 0 && v[j] == 0){
                    sum1 += a[i][j];
                }else if(v[i] == 1 && v[j] == 1){
                    sum2 += a[i][j];
                }
            }
        }
        int temp = diff(sum1, sum2);
        if(temp < result)
            result = temp;
	}while(next_permutation(v.begin(), v.end()));

	cout << result;

	return 0;
}
