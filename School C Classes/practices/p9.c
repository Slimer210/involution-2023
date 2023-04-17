#include <stdio.h>
int main() {
	int input = 10;
	printf("Please input a number: "); // informs user to enter a number
	scanf("%d", &input); // retrieves input from user
	printf("The number is %d\n", input); // prints the number
	
	return 0;
}