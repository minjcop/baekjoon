#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int T;
    while(1){
        cin >> T;
        if(T == 0)
            break;
        vector <int> v(T);
        vector <bool> x(T);
        for(int i = 0; i < T; ++i){
            cin >> v[i];
            if(i < 6){
                x[i] = 1;
            }else{
                x[i] = 0;
            }
        }

        do{
            for(int i = 0; i < T; ++i){
                if(x[i]){
                    cout << v[i] << " ";
                }
            }
            cout << "\n";
        }while(prev_permutation(x.begin(), x.end()));
        cout << "\n";
    }

	return 0;
}
