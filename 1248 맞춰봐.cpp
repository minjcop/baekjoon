#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;
char a[15][15] = { 0, };
vector <int> v;
bool complete = false;
int addVector(vector <int> &v, int a, int b){
    int sum = 0;
    for(int i = a; i <= b; ++i){
        sum += v[i];
    }
    return sum;
}
bool check(int num, char op){
    if(op == '-'){
        if(num < 0)
            return true;
    }
    if(op == '+'){
        if(num > 0)
            return true;
    }
    if(op == '0'){
        if(num == 0)
            return true;
    }
    return false;
}

bool good(vector <int> &v, int num, int index){
    vector <int> s;
    s = v;
    s.push_back(num);
    if(v.empty()){
        return check(num, a[0][0]);
    }
    for(int i = 0; i <= index; ++i){
        for(int j = i; j <= index; ++j){
            if(check(addVector(s, i, j), a[i][j]) == false){
                return false;
            }
        }
    }
    return true;
}

void func(int index, vector <int> &v){
    if(index == n){
        for(int i = 0; i < v.size(); ++i){
            cout << v[i] << " " ;
        }
        complete = true;
        return;
    }
    for(int i = -10; i <= 10; ++i){
        if(good(v, i, index)){ // 여기서 자연스럽게 push_back 이 진행된다.
            v.push_back(i);
            func(index+1, v);
            if(complete == true)
                return;
            v.pop_back();
        }
    }
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;

	for(int i = 0; i < n; ++i){
        for(int j = i; j < n; ++j){
            cin >> a[i][j];
        }
	}

	func(0, v);

	return 0;
}
