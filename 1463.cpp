#include <stdio.h>

int main(void)
{
	int x;
	scanf("%d", &x);
	
	int ar[1000005] = { 0, };
	
	ar[1] = 0;
	ar[2] = ar[3] = 1;
	
	int temp;
	for(int i = 4; i <= 1000000; ++i){
		temp = ar[i - 1] + 1;
		if(i % 2 == 0){
			if(ar[i / 2] + 1 < temp){
				temp = ar[i / 2] + 1;
			}
		}
		if(i % 3 == 0){
			if(ar[i / 3] + 1 < temp){
				temp = ar[i / 3] + 1;
			}
		}
		ar[i] = temp;
	}
			
	printf("%d", ar[x]);
		
	return 0;
}
