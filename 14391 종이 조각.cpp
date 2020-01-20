#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(void){
    int n, m;
    cin >> n >> m;
    int a[4][4] = { 0, };

    for(int i = 0; i < n; ++i){ // n이 가로,
        for(int j = 0; j < m; ++j){ // m이 세로.
            scanf("%1d", &a[i][j]);
        }
    }

    int ans = 0;
    for(int state = 0; state < (1 << (n*m)); ++state){
        int sum = 0;
        for(int row = 0; row < n; ++row){
            int cur = 0;
            for(int col = 0; col < m; ++col){
                int k = row*m + col;
                if((state & (1 << k)) == 0){
                    cur = cur*10 + a[row][col];
                }else{
                    sum += cur;
                    cur = 0;
                }
            }
            sum += cur;
        }
        for(int col = 0; col < m; ++col){
            int cur = 0;
            for(int row = 0; row < n; ++row){
                int k = row*m + col;
                if((state & (1 << k)) != 0)
                    cur = cur*10 + a[row][col];
                else{
                    sum += cur;
                    cur = 0;
                }
            }
            sum += cur;
        }
        ans = max(ans, sum);
    }
    cout << ans;
    return 0;
}
