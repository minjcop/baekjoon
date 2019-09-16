#include <stdio.h>

int main(void)
{
	int ar[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	char day[7][4] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
	int sum = 0;
	int m, d;
	scanf("%d %d", &m, &d);
	sum = d;
	
	for(int i = 0; i < m - 1; ++i)
		sum += ar[i];
	
	printf("%s", day[sum % 7]);
	return 0;
}
