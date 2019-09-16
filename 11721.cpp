#include <iostream>

using namespace std;

int main(void)
{
	char str[101] = { 0, };

	cin >> str;
	for(int i = 0; str[i] != '\0'; ++i){
		cout << str[i];
		if((i+1) % 10 == 0){
			cout << endl;
		}
	}
	return 0;
}
