#include <stdio.h> 

int main(void){
	int x;
	int v [100]; //Vector del número
	printf("Base 10: ");
	scanf("%d",&x);
	
	int i = 0;
	v[i] = x%2;
	while(x>=2){
		i++;
		x = x/2;
		v[i] = x%2;
	}

	printf("Base 2: ");
	for(i; i>=0; i--) printf("%d",v[i]);
	printf("\n");
}
