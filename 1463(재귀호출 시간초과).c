//���� 50���� �ԷµǸ� toOne(x-1, num)�� �ֱ� ������ 50���� �̻� ����ȴ�.
//���� �ð��ʰ��� �߻��Ѵ�. 
#include <stdio.h>
 
int min;

int toOne(int x, int num)
{
	if(x == 1){
		if(num < min)
			min = num;
		return min; 
	}
	num++;
	
	if(x % 3 == 0)
		toOne(x / 3, num);
	if(x % 2 == 0)
		toOne(x / 2, num);
	toOne(x - 1, num);
}
	 
	 
		
int main(void)
{
	int x;
	scanf("%d", &x);
	
	min = x;
	int result = toOne(x, 0);
	
	printf("%d", result);
		
	return 0;
}
