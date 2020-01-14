#include <iostream>
#include <string>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string a, b;
	cin >> a;
	cin >> b;

	for(int i = 0; i < 100000; ++i){
        if(a[i] == '1' && b[i] == '1')
            cout << 1;
        else
            cout << 0;
	}
	cout << endl;

	for(int i = 0; i < 100000; ++i){
        if(a[i] == '1' || b[i] == '1')
            cout << 1;
        else
            cout << 0;
	}
	cout << endl;

	for(int i = 0; i < 100000; ++i){
        if(a[i] != b[i])
            cout << 1;
        else
            cout << 0;
	}
	cout << endl;

	for(int i = 0; i < 100000; ++i){
        if(a[i] == '1')
            cout << 0;
        else
            cout << 1;
	}
	cout << endl;

	for(int i = 0; i < 100000; ++i){
        if(b[i] == '1')
            cout << 0;
        else
            cout << 1;
	}
	cout << endl;

	return 0;
}
