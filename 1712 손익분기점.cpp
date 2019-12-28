#include <iostream>

using namespace std;

int main(void){
    long long a, b, c;
    cin >> a >> b >> c; // a, b, c는 21억이하의 자연수. a, b, c의 배수는 int 얼마든지 넘는다.

    //손익분기점이 존재하지 않으려면 b가 c보다 크거나 같으면 된다.
    if(b >= c){
        cout << "-1";
        return 0;
    }else{
        int i;
        for(i = 1; a/(c-b) >= i; ++i); // a + b*i >= c*i와 여기 쓰인 식은 엄청난 차이다.
        cout << i;
    }

    return 0;
}
