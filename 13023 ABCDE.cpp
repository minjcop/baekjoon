// 공부 위해 배운 것들 전부를 활용해주었다.
#include <iostream>
#include <vector>

using namespace std;

bool a[2000][2000];
vector <int> g[2000];
vector < pair <int, int> > edges; // 간선리스트.

int main(void){
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; ++i){
        int from, to;
        cin >> from >> to;
        edges.push_back({from, to}); // 간선 리스트
        edges.push_back({to, from});
        a[from][to] = a[to][from] = true; // 인접 행렬
        g[from].push_back(to); // 인접 리스트
        g[to].push_back(from);
    }
    m *= 2; // 간선이 반대로가는것도있기때문에 2배.
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < m; ++j){
            int A = edges[i].first;
            int B = edges[i].second;

            int C = edges[j].first;
            int D = edges[j].second;
            if(A == B || A == C || A == D || B == C || B == D || C == D) // 같은 거 존재하는지 검사.
                continue;

            if(!a[B][C]){
                continue;
            }

            for(int E : g[D]){
                if(A == E || B == E || C == E || D == E)
                    continue;
                cout << 1 << "\n";
                return 0;
            }
        }
    }
    cout << 0 << "\n";
	return 0;
}
