#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(void){
    bool visited[101] = { 0, };
    vector <int> v[101];
    queue <int> q;
    int n;
    cin >> n;

    int c;
    cin >> c;

    for(int i = 0; i < c; ++i){
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    q.push(1);
    visited[1] = true;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int i = 0; i < v[x].size(); ++i){
            int k = v[x][i];
            if(visited[k])
                continue;
            visited[k] = true;
            q.push(k);
        }
    }

    int cnt = 0;
    for(int i = 1; i <= 100; ++i){
        if(visited[i])
            cnt++;
    }

    cout << cnt-1;

	return 0;
}
