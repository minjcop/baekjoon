#include <iostream>
#include <cstring>

using namespace std;

int main(void){
	string s1, s2;
	cin >> s1 >> s2;

	int lcs[1001][1001] = { 0, };

	for(int i = 1; s1[i-1] != '\0'; ++i){
		for(int j = 1; s2[j-1] != '\0'; ++j){
			if(s1[i-1] == s2[j-1])
				lcs[i][j] = lcs[i-1][j-1] + 1;
			else
				lcs[i][j] = max(lcs[i][j-1], lcs[i-1][j]);
		}
	}

	cout << lcs[s1.length()][s2.length()];
	return 0;
}
