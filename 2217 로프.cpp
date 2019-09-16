#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int max = 0;
	int ret;
	int n;
	int rope[100003] = { 0, }; // rope[1]���� rope[100000] ���� ����. 
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> rope[i];
	}
	
	sort(rope, rope + n);
	
	for(int i = 0; i < n; i++){
		ret = (i + 1) * rope[n - 1 - i];
		if(max < ret)
			max = ret;
	}
	
	printf("%d", max);
	return 0;
}

