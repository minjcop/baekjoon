#include <iostream>
#include <utility>
#include <algorithm>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	pair <int, int> p[100001];

	int n;
	cin >> n;
	for(int i = 0; i < n; ++i){
	    int x, y;
        cin >> x >> y;
        p[i] = make_pair(x, y);
	}

	sort(p, p+n);

	for(int i = 0; i < n; ++i){
        cout << p[i].first << " " << p[i].second << '\n';
	}


	return 0;
}
