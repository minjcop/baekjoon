#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 1000000000
#define MIN -1000000000

using namespace std;

int main(void){


    int n;
    cin >> n;
    vector <int> v;
    int x;
    for(int i = 0; i < n; ++i){
        cin >> x;
        v.push_back(x);
    }

    int add, minus, multi, div;
    cin >> add >> minus >> multi >> div;
    string operators = "";

    while(add--){
        operators += '+';
    }
    while(minus--){
        operators += '-';
    }
    while(multi--){
        operators += '*';
    }
    while(div--){
        operators += '/';
    }
    sort(operators.begin(), operators.end());
    int maxNum = MIN;
    int minNum = MAX;
    do{
        int sum = v[0];
        for(int i = 0; i < operators.length(); ++i){
            if(operators[i] == '+'){
                sum += v[i+1];
            }else if(operators[i] == '-'){
                sum -= v[i+1];
            }else if(operators[i] == '*'){
                sum *= v[i+1];
            }else if(operators[i] == '/'){
                sum /= v[i+1];
            }
        }
        if(maxNum < sum){
            maxNum = sum;
        }
        if(minNum > sum){
            minNum = sum;
        }
    }while(next_permutation(operators.begin(), operators.end()));

    cout << maxNum << "\n";
    cout << minNum << "\n";

	return 0;
}
