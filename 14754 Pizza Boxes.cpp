#include <iostream>
#include <vector>

using namespace std;

int main(void){
    int n, m;
    cin >> n >> m;

    long long ar[1001][1001] = { 0, };
    bool isMax[1001][1001] = { 0, }; // Max를 1로 정함. Max가 아닌 제거해도 될 것은 0

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> ar[i][j];
        }
    }

    for(int i = 0; i < n; ++i){
        long long maxi = 0;
        int indexI, indexJ;
        for(int j = 0; j < m; ++j){
            if(maxi <= ar[i][j]){
                maxi = ar[i][j];
                indexI = i;
                indexJ = j;
            }
        }
        isMax[indexI][indexJ] = 1;
    }

    for(int i = 0; i < m; ++i){
        long long maxi = 0;
        int indexI, indexJ;
        for(int j = 0; j < n; ++j){
            if(maxi <= ar[j][i]){
                maxi = ar[j][i];
                indexI = i;
                indexJ = j;
            }
        }
        isMax[indexJ][indexI] = 1;
    }

    long long res = 0;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(isMax[i][j] == 0){
                res += ar[i][j];
            }
        }
    }
    cout << res << "\n";

    return 0;
}
