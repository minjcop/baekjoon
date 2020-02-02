#include <iostream>
#include <vector>

using namespace std;
const int dx[] = {0, -1, 0, 1, -1, -1, 1, 1};
const int dy[] = {-1, 0, 1, 0, -1, 1, -1, 1};
int cnt;
int w, h;
vector <int> island;
int ar[50][50] = { 0, };

void dfs(int x, int y){
    cnt++;
    ar[x][y] = 0;
    for(int i = 0; i < 8; ++i){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx < 0 || nx >= w || ny < 0 || ny >= h)
            continue;
        if(!ar[nx][ny])
            continue;
        dfs(nx, ny);
    }
}
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(1){
        cin >> w >> h;
        if(w == 0 && h == 0){
            break;
        }

        for(int i = 0; i < h; ++i){
            for(int j = 0; j < w; ++j){
                cin >> ar[j][i];
            }
        }

        for(int i = 0; i < h; ++i){
            for(int j = 0; j < w; ++j){
                if(ar[j][i]){
                    cnt = 0;
                    dfs(j, i);
                    island.push_back(cnt);
                }
            }
        }
        cout << island.size() << "\n";

        island.clear();
    }

	return 0;
}
