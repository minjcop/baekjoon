#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector <int> v(n);

	for(int i = 0; i < n; ++i){
        cin >> v[i];
	}

	bool check = next_permutation(v.begin(), v.end());

	if(check){
        for(int i = 0; i < n; ++i){
            cout << v[i] << " ";
        }
	}else{
        cout << "-1";
	}

	return 0;
}
