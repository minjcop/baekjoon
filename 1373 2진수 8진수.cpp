#include <iostream>
#include <string>


using namespace std;

int main(void){

    string s; // ���� ���̰� 3�� ����� �ƴϸ� �տ� �׸�ŭ 0�� �߰����ش�.
    cin >> s;
    int len;
    int n;
    string result;

    len = s.size();
    while(len % 3 != 0){
        len++;
    }

    n = len - s.size(); // 3�� ����� �Ǵµ� �ʿ��� �տ� ���� 0�� ����.

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
