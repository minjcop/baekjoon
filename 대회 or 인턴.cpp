#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int n, m, k; // n�� ����, m�� ���� 
	int others = 0;
	int team = 0;
	scanf("%d %d %d", &n, &m, &k);
	while(n != m*2){
		if(n > m*2){
			n--;
			others++;
		}
		else if(n < m*2){
			m--;
			others++;
		}
	}
	team = m;
	while(k > others){
		others = others + 3;
		team--;
	}
	printf("%d", team);
	return 0;	
}
// ��ȸ 2�� 1��
// ���Ͻ� ������ ��ȸ ���� �Ұ�.
// n��, m��
//k���� �̴µ� ��ȸ�� ���� ����� �ִ�ȭ �ǰ� �̾���� �Ѵ�.
	//���� ��� 10���� �ִµ� ���� 6, ���� 4�̰� ���Ͻ� 3�̸�
	//����2, ����1-> 4,3�̹Ƿ� 4,2
	//����1, ����2-> 5,2�̹Ƿ� 4,2 
// n >= 2*m�̸� n--
// n < 2*m�̸� m--
// �̷��� �ؼ� ������� �ο� ���ְ�, k�� ���� �ȵǸ�
// +3�����ְ� �� ���� k���� ũ�ų� ������ �ȴ�. ��  �� �� -1 ���ָ� ��. 
