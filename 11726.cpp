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
	//�Ǿ��� �� �������ִ°��,
	//�Ǿ��� �κ� �����ִ°� 2��
	//���� �ٸ� ��츦 ������ ��Ģ���� ã���� �Ǳ� ������. 
	for(int i = 4; i <= 1000; ++i){
		ar[i] = ar[i-1] + ar[i-2];
		ar[i] = ar[i] % 10007;
	}
	
	printf("%d", ar[n]);
	
	return 0;
}
	
	
