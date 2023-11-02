#include <stdio.h>
int main(void) {
	int a[99], n, i, min;
	printf("How many numbers to determine\n");
	scanf("%d", &n);
	if (n<0) {
		printf("Error\n");
		return 1;
	}
	for (i=0;i<n;i++) {
		printf("Number %d: ", i+1);
		scanf("%d", &a[i]);
	}
	min=a[0];
	for (i=1;i<n;i++) {
		if (min>a[i]) {
			min=a[i];
		} 
	}
	printf("Smallest number is %d", min);
	return 0;
}

