#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
bool check(string password);
void func(int L, vector<char> &v, string password, int i);
int main(void){
    int L, C;
    cin >> L >> C;

    vector <char> v(C);
    for(int i = 0; i < C; ++i){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    func(L, v, "", 0);

    return 0;
}

bool check(string password){
    int mo = 0, za = 0;
    for(int i = 0; i < password.length(); ++i){
        if(password[i] == 'a' ||
           password[i] == 'e' ||
           password[i] == 'i' ||
           password[i] == 'o' ||
           password[i] == 'u')
            mo++;
        else
            za++;
    }
    return za >= 2 && mo >= 1;
}
void func(int L, vector<char> &v, string password, int i){
    if(password.length() == L){
        if(check(password)){
            cout << password << "\n";
            return;
        }
    }
    if(i == v.size())
        return;

    func(L, v, password + v[i], i+1);
    func(L, v, password, i+1);
}
