#include <iostream>
#include <queue>

using namespace std;

int main(void){
    queue <int> q;
    bool visited[100001] = { 0, };
    int dist[100001] = { 0, };

    int n, k;
    cin >> n >> k;
    const int dx[] = {-1, 1};

    q.push(n);
    while(!q.empty()){
        int x = q.front();
        q.pop();
        if(x == k) break;
        for(int i = 0; i < 2; ++i){
            int nx = x + dx[i];
            if(visited[nx] || nx < 0 || nx >= 100001)
                continue;
            visited[nx] = true;
            dist[nx] = dist[x] + 1;
            q.push(nx);
        }

        int nx = 2*x;
        if(visited[nx] || nx < 0 || nx >= 100001)
            continue;
        visited[nx] = true;
        dist[nx] = dist[x] + 1;
        q.push(nx);
    }

    cout << dist[k];

    return 0;

}
