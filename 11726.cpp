#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	
	int ar[1005] = { 0, };
	
	ar[1] = 1;
	ar[2] = 2;
	ar[3] = 3;
	//ar[4] = ar[2] + ar[3]
	//맨앞의 것 세워져있는경우,
	//맨앞의 두블럭 누워있는거 2개
	//서로 다른 경우를 따지고 규칙성을 찾으면 되기 때문에. 
	for(int i = 4; i <= 1000; ++i){
		ar[i] = ar[i-1] + ar[i-2];
		ar[i] = ar[i] % 10007;
	}
	
	printf("%d", ar[n]);
	
	return 0;
}
	
	
