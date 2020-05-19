#include <iostream>
#include <queue>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    priority_queue <int> pq;
    int x;
    for(int i = 0; i < n; ++i){
        cin >> x;
        if(x == 0){
            if(!pq.empty()){ // �켱���� ť�� ����ִ� ���.
                pq.pop();
            }else{
                cout << 0 << "\n";
            }
        }else{
            pq.push(x);
        }
    }
    return 0;
}
