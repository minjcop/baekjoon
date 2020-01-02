#include <iostream>
#include <algorithm> // min, max

using namespace std;

int sub(int a, int b);
int gcd(int a, int b);

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, S; // n�� ������ ��ġ ����(������ (?)) , S�� ������ ��ġ.
    int A[100001] = { 0, }; // ������ ��ġ.

    cin >> n >> S;

    cin >> A[0];
    int temp = sub(S, A[0]); // ������ ����� �Ÿ����̸� �ϳ� �����س��� ����.
    for(int i = 1; i < n; ++i){
        cin >> A[i];
        temp = gcd(temp, sub(S, A[i])); // ���ο� �Ÿ� ���̿� �ִ����� ���ϴ� �۾�.
    }

    cout << temp;

    return 0;
}

int sub(int a, int b){ // a�� b�� ū������ �������� ���� �Լ�.
    return max(a, b) - min(a, b);
}

int gcd(int a, int b){
    int t;

    while(b){
        t = a % b;
        a = b;
        b = t;
    }
    return a;
}
