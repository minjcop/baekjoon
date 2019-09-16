#include <iostream>
#include <stdio.h>

using namespace std;

int main(void)
{
	char str[101] = { 0, };
	int sum = 0;
	int N;
	cin >> N;
	scanf("%s", str);
	for(int i = 0; i < N; ++i){
		sum += str[i];
	}
	cout << sum << endl;
	return 0;
	
}
