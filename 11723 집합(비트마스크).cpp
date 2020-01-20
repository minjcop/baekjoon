#include <iostream>
#include <string>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int M;
    cin >> M;
    int max = (1<<20) - 1;
    int num = 0;
    while(M--){
        string s;
        cin >> s;
        int x;
        if(s == "add"){
            cin >> x;
            x--;
            num = num | (1 << x);
        }
        if(s == "remove"){
            cin >> x;
            x--;
            num = num & ~(1 << x);
        }
        if(s == "check"){
            cin >> x;
            x--;
            if(num & (1 << x))
                cout << "1" << "\n";
            else
                cout << "0" << "\n";
        }
        if(s == "toggle"){
            cin >> x;
            x--;
            if(num & (1 << x)){
                num = num & ~(1 << x);
            }else{
                num = num | (1 << x);
            }
        }
        if(s == "all"){
            num = max;
        }
        if(s == "empty"){
            num = 0;
        }
    }

	return 0;
}
