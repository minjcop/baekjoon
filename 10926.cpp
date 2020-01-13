#include <iostream>
#include <string>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	cin >> s;

	string s2;
	cin >> s2;

	if(s == s2)
        cout << s << '?'<< '?' << '!';

	return 0;
}
