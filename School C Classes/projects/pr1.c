//S2S2 31 How Wei Shan
#include <stdio.h>
int main() {
	int x, y, z;
	printf("����3��������\n");
	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &z);
	int temp;
	if (x>y) {
		temp=y;
		y=x;
		x=temp;
	} 
	if (x>z) {
		temp=z;
		z=x;
		x=temp;
	} 
	if (y>z) {
		temp=z;
		z=y;
		y=temp;
	}
	printf("��С�����е���ţ�%d %d %d", x, y, z);
	return 0;
}
