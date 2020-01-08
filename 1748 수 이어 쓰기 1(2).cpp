#include <iostream>

using namespace std;

typedef long long ll;

int sizeint(int n);
int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	ll sum = 0;
	int x = 1;
	if(n > 90000000){
        x = 90000001;
        sum += 708888897;
	}else if(n > 80000000){
        x = 80000001;
        sum += 628888897;
	}else if(n > 70000000){
        x = 70000001;
        sum += 548888897;
	}else if(n > 60000000){
        x = 60000001;
        sum += 468888897;
	}else if(n > 50000000){
        x = 50000001;
        sum += 388888897;
	}else if(n > 40000000){
        x = 40000001;
        sum += 308888897;
	}else if(n > 30000000){
        x = 30000001;
        sum += 228888897;
	}else if(n > 20000000){
        x = 20000001;
        sum += 148888897;
	}else if(n > 10000000){
        x = 10000001;
        sum += 68888897;
	}else if(n > 1000000){
        x = 1000001;
        sum += 5888896;
	}else if(n > 100000){
        x = 100001;
        sum += 488895;
	}else if(n > 10000){
        x = 10001;
        sum += 38894;
	}else if(n > 1000){
        x = 1001;
        sum += 2893;
	}else if(n > 100){
        x = 101;
        sum += 192;
	}else if(n > 10){
        x = 11;
        sum += 11;
	}

	for(int i = x; i <= n; ++i){
        sum += sizeint(i);
	}

	cout << sum;
	return 0;
}

int sizeint(int n){
    int ret = 0;
    while(n){
        n /= 10;
        ret++;
    }
    return ret;
}
