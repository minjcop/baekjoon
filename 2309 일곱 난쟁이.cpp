#include <iostream>
#include <algorithm> // sort

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int nan[9] = { 0, }; // 0 ~ 8 ���� �������� Ű ����.
    int sum = 0;

    for(int i = 0; i < 9; ++i){
        cin >> nan[i];
        sum += nan[i];
    }
    sort(nan, nan + 9);
    int i, j;
    bool check = false; // Ȯ�εǸ� true;
    for(i = 0; i < 8; ++i){
        for(j = i + 1; j < 9; ++j){
            if(sum - nan[i] - nan[j] == 100){
                check = true;
                break;
            }
        }
        if(check == true) break;
    }

    for(int k = 0; k < 9; ++k){
        if(k != i && k != j){
            cout << nan[k] << '\n';
        }
    }
    return 0;
}
