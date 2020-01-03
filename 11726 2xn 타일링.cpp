#include <iostream>

using namespace std;

int tile_2[1001] = { 0, };

int numTile(int n);

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    tile_2[1] = 1;
    tile_2[2] = 2;

    cout << numTile(n);

    return 0;
}

int numTile(int n){
    if(tile_2[n]){ // 0아닌 값이 존재하면
        return tile_2[n];
    }else{
        tile_2[n] = numTile(n-2) + numTile(n-1);
        tile_2[n] %= 10007;
        return tile_2[n];
    }
}
