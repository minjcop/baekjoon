#include <iostream>
#include <algorithm> // min

using namespace std;

bool broken[10] = { 0, }; // 안부숴졌을때는 false, 부숴지면 true

bool check(int a);
int diff(int a, int b); // 절댓값
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
	for(int i = 0; i <= 1000000; ++i){ // 여기서 100과 result 비교.
        // 여기서 10으로 계속 나누었을때 부숴진 숫자가없으면 된다.
        if(check(i)){ // 부숴진 숫자가 있는지 검사해서 없으면 if문 작동.
            int temp = diff(n, i);
            if(temp < mindp){
                mindp = temp;
                minval = i;
            }
        }
	}
    //mindp에 minval 최소가 되는 수의 자릿수를 더해줘야 한다.
    // n의 자릿수가 아니다. 왜냐면 minval를 리모컨에 검색하고 거기서 접근하는 거라서.
    mindp += sizeint(minval);

	int temp = diff(n, 100);
	//여기서는 100과 n의 절댓값과 mindp값을 비교하면 된다.
	cout << min(temp, mindp);

	return 0;
}

bool check(int a){ // 부숴진 숫자가 있으면 continue;로 넘어간다.
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
    // 0도 1자리를 입력한것으로 봐야한다.
    if(a == 0){
        return 1;
    }
    while(a){
        a /= 10;
        ret++;
    }

    return ret;
}
