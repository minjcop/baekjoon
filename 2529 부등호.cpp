#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int n;
char a[20] = { 0, }; // �ε�ȣ
bool check[11] = { 0, }; // ����� ���� �Ⱦ��� ���ؼ�.
vector <string> ans;

bool good(char x, char y, char op){
    if(op == '<'){
        if(x < y)
            return true;
    }else if(op == '>')
        if(x > y)
            return true;

    return false;
}

void func(int index, string num){
    if(index == n+1){ // 0 ~ n������ ���� �ùٸ��� �Է¹���.
        ans.push_back(num);
        return;
    }

    for(int i = 0; i <= 9; ++i){
        if(check[i])
            continue;
        if(index == 0 || good(num[index-1], i+'0', a[index-1])){
            check[i] = true;
            func(index+1, num+to_string(i));
            check[i] = false;
        }
    }
}

int main(void){
    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    func(0, "");

    auto it = minmax_element(ans.begin(), ans.end());

    cout << *it.second << endl;
    cout << *it.first << endl;

    return 0;
}
