#include <iostream>
#include <algorithm> // min

using namespace std;

bool broken[10] = { 0, }; // �Ⱥν��������� false, �ν����� true

bool check(int a);
int diff(int a, int b); // ����
int sizeint(int a);
int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	int m;
	cin >> m;
	for(int i = 0; i < m; ++i){
        int num;
        cin >> num;
        broken[num] = true;
	}

	int mindp = 1111111;
	int minval;
	for(int i = 0; i <= 1000000; ++i){ // ���⼭ 100�� result ��.
        // ���⼭ 10���� ��� ���������� �ν��� ���ڰ������� �ȴ�.
        if(check(i)){ // �ν��� ���ڰ� �ִ��� �˻��ؼ� ������ if�� �۵�.
            int temp = diff(n, i);
            if(temp < mindp){
                mindp = temp;
                minval = i;
            }
        }
	}
    //mindp�� minval �ּҰ� �Ǵ� ���� �ڸ����� ������� �Ѵ�.
    // n�� �ڸ����� �ƴϴ�. �ֳĸ� minval�� �������� �˻��ϰ� �ű⼭ �����ϴ� �Ŷ�.
    mindp += sizeint(minval);

	int temp = diff(n, 100);
	//���⼭�� 100�� n�� ���񰪰� mindp���� ���ϸ� �ȴ�.
	cout << min(temp, mindp);

	return 0;
}

bool check(int a){ // �ν��� ���ڰ� ������ continue;�� �Ѿ��.
    if(a == 0){
        if(broken[a] == true)
            return 0;
        else
            return 1;
    }
    while(a){
        int temp = a % 10;
        if(broken[temp] == true){ // 6 9 5  9590
            return 0;
        }
        a /= 10;
    }
    return 1;
}

int diff(int a, int b){
    if(a > b){
        return a-b;
    }else{
        return b-a;
    }
}

int sizeint(int a){
    int ret = 0;
    // 0�� 1�ڸ��� �Է��Ѱ����� �����Ѵ�.
    if(a == 0){
        return 1;
    }
    while(a){
        a /= 10;
        ret++;
    }

    return ret;
}
