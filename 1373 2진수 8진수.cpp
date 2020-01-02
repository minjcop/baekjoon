#include <iostream>
#include <string>


using namespace std;

int main(void){

    string s; // 수의 길이가 3의 배수가 아니면 앞에 그만큼 0을 추가해준다.
    cin >> s;
    int len;
    int n;
    string result;

    len = s.size();
    while(len % 3 != 0){
        len++;
    }

    n = len - s.size(); // 3의 배수가 되는데 필요한 앞에 붙일 0의 개수.

    for(int i = 0; i < n; ++i){
        result += '0';
    }


    result += s;

    for(int i = 0; result[i] != '\0'; i += 3){
        int a, b, c;
        a = result[i] - '0';
        b = result[i+1] - '0';
        c = result[i+2] - '0';

        cout << 4*a + 2*b + c;
    }

    return 0;
}
