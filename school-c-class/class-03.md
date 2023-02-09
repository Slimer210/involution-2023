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
  printf("%.2f\n", b);
  printf("%c\n", c);
  return 0;
}
/*
Results:

15
10.02
I
*/
```
