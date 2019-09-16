#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	
	int ar[1005] = { 0, };
	ar[1] = 1;
	ar[2] = 3;
	ar[3] = 5;
	
	for(int i = 4; i <= 1000; ++i){
		ar[i] = ar[i-1] + 2*ar[i-2];
		ar[i] = ar[i] % 10007;
	}
	
	cout << ar[n] << endl;
	
	return 0;
}
