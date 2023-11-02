#include <stdio.h>
int main(void) {
	int count=0;
	printf("How many car: ");
	scanf("%d", &count);
	if (count<0) {
		printf("Error\n");
		return 1;
	}
	int i, total=0;
	for (i=1;i<=count;i++) {
		int t, h;
		printf("car %d entry time: ", i);
		scanf("%d", &t);
		if (t/100>23 || t/100<0 || t%100>59 || t%100<0) {
			printf("wrong time format\n\n");
			continue;
		}
		printf("parking hour: ");
		scanf("%d", &h);
		int temp;
		if(t<730) {
			if(h>=12) {
				temp=h;
			} else {
				temp=2;
			}
		} else {
			temp=h;
		}
		printf("parking fee: $%d\n", temp);
		total+=temp;
		printf("\n");
	}
	printf("total parking fee: $%d\n", total);
	return 0;
}

