#include <stdio.h>

int main() {
	int a1,a2,a3,b1,b2,b3;
	
	int af=0 , bf=0;
	printf("Please type the first player's scores...");
	scanf("%d %d %d" ,&a1,&a2,&a3);
	
	printf("Please type the second player's scores...");
	scanf("%d %d %d" ,&b1,&b2,&b3);
	
	if(a1>b1)
	scanf("%d" ,++af);
	else if(a1<b1)
	scanf("%d" ,++bf);
	
	if(a2>b2)
	scanf("%d" ,++af);
	else if(a2<b2)
	scanf("%d" ,++bf);
	
	if(a3>b3)
	scanf("%d" ,++af);
	else if(a3<b3)
	scanf("%d" ,++bf);
	
	
	printf("Player 1 %d - %d Player 2" ,af,bf);
	
	
	
	
	
			return 0;
}

