#include <iostream>
#include <queue>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    queue < pair <int, int> > q;
    int ar[301][301];
    const int dx[] = {2, 2, 1, 1, -1, -1, -2, -2};
    const int dy[] = {1, -1, 2, -2, 2, -2, 1, -1};

    int T;
    cin >> T;
    while(T--){
        int l;
        cin >> l;
        for(int i = 0; i < l; ++i){
            for(int j = 0; j < l; ++j){
                ar[i][j] = 0;
            }
        }
        int x, y;
        cin >> x >> y;
        q.push(pair<int, int>(x, y));
        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            for(int i = 0; i < 8; ++i){
                int nx = x + dx[i];
                int ny = y + dy[i];
                if(nx >= l || nx < 0 || ny >= l || ny < 0)
                    continue;
                if(ar[nx][ny])
                    continue;
                ar[nx][ny] = ar[x][y] + 1;
                q.push(pair<int, int>(nx, ny));
            }
        }
        ar[x][y] = 0; // 자기위치는 0
        int goalX, goalY;
        cin >> goalX >> goalY;
        cout << ar[goalX][goalY] << "\n";

    }

    return 0;
}
