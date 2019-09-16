#include <iostream>

using namespace std;

int main(void)
{	
	int ar[15] = { 0, };
	ar[1] = 1;
	ar[2] = 2;
	ar[3] = 4;
	ar[4] = 7;
	
	int T;
	cin >> T;
	int n;
	
	for(int a = 0; a < T; ++a){
		cin >> n;
		
		for(int i = 4; i <= 11; ++i){
			ar[i] = ar[i-1] + ar[i-2] + ar[i-3];
		}
		
		cout << ar[n] << endl;
	}
	return 0;
}
