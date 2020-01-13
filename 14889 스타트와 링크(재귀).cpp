#include <iostream>
#include <algorithm>
#include <vector>
#define MAX 2147483647

using namespace std;

int a[21][21] = { 0, };
int diff(int a, int b);
vector <int> v1, v2;
int result = MAX;
int n;

void func(int index);
int main(void){

    cin >> n;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> a[i][j];
        }
    }

    func(0);
    cout << result;
    return 0;
}

int diff(int a, int b){
    if(a > b)
        return a-b;
    else
        return b-a;
}

void func(int index){
    if(index == n){
        if(v1.size() == n/2 && v2.size() == n/2){
            int sum1 = 0;
            int sum2 = 0;
            for(int i = 0; i < n/2; ++i){
                for(int j = 0; j < n/2; ++j){
                    sum1 += a[v1[i]][v1[j]];
                    sum2 += a[v2[i]][v2[j]];
                }
            }
            int temp = diff(sum1, sum2);
            if(result > temp)
                result = temp;
        }
        return;
    }

    v1.push_back(index);
    func(index+1);
    v1.pop_back();

    v2.push_back(index);
    func(index+1);
    v2.pop_back();
}
