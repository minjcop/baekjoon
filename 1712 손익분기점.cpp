#include <iostream>

using namespace std;

int main(void){
    long long a, b, c;
    cin >> a >> b >> c; // a, b, c�� 21�������� �ڿ���. a, b, c�� ����� int �󸶵��� �Ѵ´�.

    //���ͺб����� �������� �������� b�� c���� ũ�ų� ������ �ȴ�.
    if(b >= c){
        cout << "-1";
        return 0;
    }else{
        int i;
        for(i = 1; a/(c-b) >= i; ++i); // a + b*i >= c*i�� ���� ���� ���� ��û�� ���̴�.
        cout << i;
    }

    return 0;
}
