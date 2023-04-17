# Revision
```cpp
#include <stdio.h>
int main() {
    int input=0; // declare input variable with initial value 0
    printf("Please input a number: "); // inform user to input a number
    scanf("%d", &input); // capture input
    printf("The input number is %d.\n", input); // print out input
}
```

# printf() and scanf()

| 格式 | 输出叙述 |
|----------|----------|
| %c | 字符 char |
| %s | 字符串 string |
| %d | 十进位整数 decimal |
| %f | 浮点值 float |
| %% | 百分比符号 |

## Ex12
```cpp
#include <stdio.h>
int main() {
    printf("%c\n", "A");
    printf("%d\n", "B");
    printf("%c\n", 87);
    printf("%d\n", 15);
    printf("%o\n", 128);
    printf("%X\n", 256);
    printf("%x\n", 1024);
    printf("%E\n", 0.001556);
    printf("%e\n", 0.006844);
    return 0;
}
/*

-1813729266
W
15
200
100
400
1.556000E-03
6.844000e-03
*/

```

## Ex13
```cpp
#include <stdio.h>
int main() {
    // 6 stands for using 6 characters space, and insert whitespaces BEFORE values
    // .2 stands for 2 float precision characters 2个小数进位
    // -6 stands for using 6 characters space, and insert whitespaces AFTER values

    printf("%6.2f\n", 19.458);
    printf("%-6.2f\n", 19.458);
    return 0;
}
```

## Ex14
```cpp
#include <stdio.h>
int main() {
    int x=8787;
    printf("%*d\n", 7, x);
    printf("%*d\n", 8, x);
    printf("%*d\n", 10, x);
    return 0;
}
```

# 多个变数的scanf()

```cpp
#include <stdio.h>
int main() {
    int a, b, c;
    // cpp 操作：cin >> a >> b >> c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d \n%d \n%d\n", a, b, c);
}
```