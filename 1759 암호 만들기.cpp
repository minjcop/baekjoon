#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	int L, C;
	cin >> L >> C; // �� C���� ���ĺ����� L������ ��ȣ�� ������ �Ѵ�.
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
        int mo = 0; // ���� ����. 1�� �̻��̾�� ��.
        int za = 0; // ���� ����. 2�� �̻��̾�� ��.
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
