#include <stdio.h>
#include <stdlib.h>

#define COL 6
#define ROW 6
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void multiplication(int table[][COL]);

int main(int argc, char *argv[]) {
	int table[ROW][COL];
	
	multiplication(table);
	
	return 0;
}

void multiplication(int table[][COL]){
	int i,j;

	for (i=1;i<=COL;i++){
		for(j=1;j<=COL;j++){
			printf("%2d ",i*j);
		}
		printf("\n");
	}
	
	
	return;
}
