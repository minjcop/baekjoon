#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int m, n;
	cin >> m >> n; // scanf("%d %d", &m, &n);
	int i, j;
	char ar[52][52] = { 0, };
	
	//°ËÁ¤ : B, Èò»ö : W
	
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			cin >> ar[i][j]; // scanf("%c", &ar[i][j]);
		}
	}

	
	return 0;
}

