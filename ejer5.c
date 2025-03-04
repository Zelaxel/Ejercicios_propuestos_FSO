#include <stdio.h>

int main(void){
	printf(" DecHexChar | DecHexChar | DecHexChar\n");
	for(int i=0; i<32; i++) printf(" %3d%3x %-3c | %3d%3x %-3c | %3d%3x %-3c\n",
					i+32,i+32,i+32,
					i+64,i+64,i+64,
					i+96,i+96,i+96);
}
