#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int abs(int a, int b);

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector <int> v(n);
	int sum = 0;
	int result = 0;

	for(int i = 0; i < n; ++i){
        cin >> v[i];
	}
	sort(v.begin(), v.end());

    for(int i = 0; i < n-1; ++i){
        result += abs(v[i], v[i+1]);
    }

	while(next_permutation(v.begin(), v.end())){ // do whileÀÌ¿ëÇÏ¸é ´õ ±ò²ûÇÏ°Ô ³ª¿È.
        for(int i = 0; i < n-1; ++i){
            sum += abs(v[i], v[i+1]);
        }
        if(sum > result){
            result = sum;
        }
        sum = 0;
	}

	cout << result;

	return 0;
}

int abs(int a, int b){
    if(a > b)
        return a-b;
    else
        return b-a;
}
