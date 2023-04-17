#include <stdio.h>
int main() {
  int a = 15;
  float b = 10.02;
  char c = 'I';
	
  printf("%d\n", a);
  printf("%.2f\n", b); //%.2 sets the floating point precision to 2
  printf("%c\n", c);
  
  printf("%d %.2f %c \n", a, b, c); // You can try out printing all variables value in a line :)
  return 0;
}
/*
Results:

15
10.02
I
15 10.02 I
*/