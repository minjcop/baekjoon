#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	int L, C;
	cin >> L >> C; // 총 C개의 알파벳으로 L길이의 암호를 만들어야 한다.
	vector <int> alp(C);
	vector <bool> per;

	for(int i = 0; i < C; ++i){
        char c;
        cin >> c;
        alp[i] = c;
	}

	sort(alp.begin(), alp.end());

	for(int i = 0; i < L; ++i){
        per.push_back(1);
	}
	for(int i = L; i < C; ++i){
        per.push_back(0);
	}

	do{
        int mo = 0; // 모음 개수. 1개 이상이어야 함.
        int za = 0; // 자음 개수. 2개 이상이어야 함.
        for(int i = 0; i < C; ++i){
            if(per[i] == 1){
                if(alp[i] == 'a' ||
                   alp[i] == 'e' ||
                   alp[i] == 'i' ||
                   alp[i] == 'o' ||
                   alp[i] == 'u' ){
                        mo++;
                   }else{
                        za++;
                   }
            }
        }
        if(mo >= 1 && za >= 2){
            for(int i = 0; i < C; ++i){
                if(per[i] == 1)
                    cout << (char)alp[i];
            }
            cout << endl;
        }


	}while(prev_permutation(per.begin(), per.end()));


	return 0;
}
