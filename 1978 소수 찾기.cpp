#include <iostream>
#include <cmath> // sqrt를 사용하기 위해서는 smath헤더파일을 선언해줘야 한다.

using namespace std;

int main(void){
    int n;
    cin >> n;

    int sum = 0;
    int x;
    while(n--){
        cin >> x;
        bool sosu = true;
        if(x == 1){
            sosu = false;
        }
        for(int i = 2; i <= sqrt(x); ++i){
            if(x % i == 0){
                sosu = false;
            }
        }
        if(sosu){
            sum += 1;
        }
    }
    cout << sum;
    return 0;
}
