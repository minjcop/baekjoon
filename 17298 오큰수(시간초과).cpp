#include <iostream>
#include <queue>

using namespace std;

int main(void){
    queue <int> q1, q2;
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        q1.push(x);
    }

    while(!q1.empty() || !q2.empty()){
        bool exist = false;
        int top = q1.front();
        q1.pop();
        while(!q1.empty()){
            if(top < q1.front()){
                cout << q1.front() << " ";
                exist = true;
                break;
            }else{
                q2.push(q1.front());
                q1.pop();
            }
        }

        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }

        if(exist == false){
            cout << "-1 ";
        }

        exist = false;
        top = q2.front();
        q2.pop();
        while(!q2.empty()){
            if(top < q2.front()){
                cout << q2.front() << " ";
                exist = true;
                break;
            }else{
                q1.push(q2.front());
                q2.pop();
            }
        }

        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }

        if(exist == false){
            cout << "-1 ";
        }
    }

    return 0;
}
