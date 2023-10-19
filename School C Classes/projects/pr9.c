//S2S2 31 How Wei Shan
#include <stdio.h>
int main(void) {
	int n;
	printf("Enter the number of rows of Floyd's triangle to print\n");
	scanf("%d", &n);
	int i, j, sum=0;
	for (i=0;i<=n;i++) {
		for (j=0;j<i;j++) {
			sum++;
			printf("%d ", sum);
		}
		printf("\n");
	}
} 
