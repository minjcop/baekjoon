#include <iostream>
#include <string>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	bool a[21] = { 0, };

	string s;
	int x;
	while(T--){
        cin >> s;
        if(s == "add"){
            cin >> x;
            a[x] = true;
        }else if(s == "remove"){
            cin >> x;
            a[x] = false;
        }else if(s == "check"){
            cin >> x;
            if(a[x])
                cout << "1" << "\n";
            else
                cout << "0" << "\n";
        }else if(s == "toggle"){
            cin >> x;
            if(a[x])
                a[x] = false;
            else
                a[x] = true;
        }else if(s == "all"){
            for(int i = 1; i <= 20; ++i)
                a[i] = true;
        }else if(s == "empty"){
            for(int i = 1; i <= 20; ++i)
                a[i] = false;
        }
	}

	return 0;
}
