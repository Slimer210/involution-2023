#include <stdio.h>
int main(void) {
	char sel;
	printf("Choose\n\'A\' or \'a\' to calculate sphere volume\n");
	printf("\'B\' or \'b\' to calculate BMI\nOptions: ");
	scanf("%c", &sel);
	const float pi = 3.14159;
	int r;
	float w, h;
	switch(sel) {
		case 'a': case 'A':
			printf("Insert radius\n");
			scanf("%d", &r);
			if (r<0) {
				printf("error\n");
				break;
			}
			float vol = pi*(r*r*r)*4/3;
			printf("Sphere volume = %.2f", vol);
			break;
		case 'b': case 'B':
			printf("insert your Weight(kg) and Height(m) with ~\n");
			scanf("%f~%f", &w, &h);
			if (w<0.0 || h<0.0) {
				printf("error\n");
				break;
			}
			float bmi=w/h/h;
			printf("your BMI is %.2f\nStatus: ", bmi);
			if (bmi<18.5) printf("Underweight\n");
			else if (bmi<=24.9) printf("Normal\n");
			else if (bmi<=29.9) printf("Overweight\n");
			else printf("Obese\n");
			break;
		default:
			printf("error\n");
			break;
	}
	return 0;
}
