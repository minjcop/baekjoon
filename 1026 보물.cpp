#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector <int> a(n);
	vector <int> b(n);

	for(int i = 0; i < n; ++i){
        cin >> a[i];
	}

	for(int i = 0; i < n; ++i){
        cin >> b[i];
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	int sum = 0;
	for(int i = 0; i < n; ++i){
        sum += a[i]*b[(n-1)-i];
	}

    cout << sum;
	return 0;
}

