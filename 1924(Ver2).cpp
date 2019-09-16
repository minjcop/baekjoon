#include <stdio.h>

int main(void)
{
	int ar[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	char day[7][4] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
	
	int sum, i, m, d;
	
	scanf("%d %d", &m, &d);
	
	for(sum = 0, i = 0; i < m - 1; ++i)
		sum += ar[i];
		
	sum += d;
	
	printf(day[sum %7]);
	printf(sum);
}
