#include <iostream>
#include <queue>

using namespace std;

struct cmp{
    bool operator()(pair <int, int> a, pair <int, int> b){
        return a.second > b.second;
    }
};

int main(void){
    int n, m;
    int indegree[32001] = { 0, };
    cin >> n >> m;
    // priority_queue <pair <int, int>, vector< pair<int, int> >, cmp > pq;
    // 그냥 queue 써보자.
    queue <int> q;
    vector <int> v[32001];
    for(int i = 0; i < m; ++i){
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        indegree[y]++;
    }
    for(int i = 1; i <= n; ++i){ // 들어오는 간선 없는 정점을 모두 queue 에 넣는다.
        if(indegree[i] == 0){
            q.push(i);
        }
    }
    while(!q.empty()){
        int k = q.front();
        for(int i = 0; i < v[k].size(); ++i){
            int index = v[k][i];
            indegree[index]--;
            if(indegree[index] == 0){
                q.push(index);
            }
        }
        cout << k << " ";
        q.pop();
    }


    return 0;
}
