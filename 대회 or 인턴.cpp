#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int n, m, k; // n명 여자, m명 남자 
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
// 대회 2남 1녀
// 인턴십 나가면 대회 참가 불가.
// n남, m녀
//k명을 뽑는데 대회에 나갈 사람이 최대화 되게 뽑아줘야 한다.
	//예를 들면 10명이 있는데 남자 6, 여자 4이고 인턴십 3이면
	//남자2, 여자1-> 4,3이므로 4,2
	//남자1, 여자2-> 5,2이므로 4,2 
// n >= 2*m이면 n--
// n < 2*m이면 m--
// 이렇게 해서 상관없는 인원 빼주고, k가 충족 안되면
// +3씩해주고 그 값이 k보다 크거나 같으면 된다. 또  팀 수 -1 빼주면 됨. 
