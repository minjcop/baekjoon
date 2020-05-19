#include <iostream>
#include <queue>

using namespace std;

int indegree[32001] = { 0, };

struct cmp{
    bool operator()(int a, int b){
        return indegree[a] > indegree[b];
    }
};

int main(void){
    int n, m;

    cin >> n >> m;


    priority_queue <int, vector <int>, cmp  > pq;
    vector <int> v[32001];
    for(int i = 0; i < m; ++i){
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        indegree[y]++;
    }
    for(int i = 1; i <= n; ++i){ // ������ ���� ���� ������ ��� queue �� �ִ´�.
        pq.push(i);
    }
    while(!pq.empty()){
        int k = pq.top();
        for(int i = 0; i < v[k].size(); ++i){
            int index = v[k][i];
            indegree[index]--;
        }
        cout << k << " ";
        pq.pop();
    }


    return 0;
}
