#include <iostream>

using namespace std;

int main(void){
    int n;
    long long W;
    cin >> n >> W;

    int day[51] = { 0, };
    for(int i = 0; i < n; ++i){
        cin >> day[i];
    }

    long long moc;
    int mod;
    for(int i = 0; i < n-1; ++i){
        if(day[i] <= day[i+1]){
            moc = W / day[i];
            moc = moc * day[i+1];
            mod = W % day[i];
            W = moc + mod;
        }
    }

    cout << W;


    return 0;
}
