#include <iostream>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	bool in[4] = { 0, };
	in[1] = true;
	for(int i = 0; i < n; ++i){
        int a, b;
        cin >> a >> b;
        if(in[a]){
            in[a] = false;
            in[b] = true;
        }else if(in[b]){
            in[b] = false;
            in[a] = true;
        }
	}

	for(int i = 1; i <= 3; ++i){
        if(in[i])
            cout << i;
	}
	return 0;
}
