# 变数宣告 Declaring Variables


## 宣告浮点值 Declaring Float Type
```cpp
#include <stdio.h>

int main() {
  float pi=3.14;
  printf("pi value is %f.\n", pi);
} 

// returns "pi value is 3.140000."
```

## 宣告字符 Declaring Character

```cpp
char c = "k";
printf("the value of c is %c.\n", c);

// returns "the value of c is k."
```
> Declare any variable first before insert value to a variable
```cpp
char a; // correct
a = 'i'; // correct

char b = 'j'; // correct

c = 'k'; // Returns Error
char c;
```

### Ex8

```cpp
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
```
## Constants
```cpp
const int pressure_pa = 101325;
// const will assign variable that have fixed value 
// it cannot be modified until this variable is redeclared
pressure_pa = 99999; // returns error
printf("%i", pressure_pa); // "101325" 
```

## Scanf - user input
### Ex9
```cpp
#include <stdio.h>
int main() {
	int input = 10;
	printf("Please input a number: ");
	scanf("%d", &input); // retrieves input from user
	printf("The number is %d\n", input);
	
	return 0;
}
```
