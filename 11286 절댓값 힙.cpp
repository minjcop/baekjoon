#include <iostream>
#include <queue>
#include <cstdlib>

using namespace std;

struct cmp{
    bool operator()(int a, int b){
        if(abs(a) == abs(b)){
            return a > b;
        }
        return abs(a) > abs(b);
    }
};

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    priority_queue <int, vector <int>, cmp> pq;
    int x;
    for(int i = 0; i < n; ++i){
        cin >> x;
        if(x != 0)
            pq.push(x);
        else{
            if(pq.empty())
                cout << 0 << "\n";
            else{
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
    }

	return 0;
}
