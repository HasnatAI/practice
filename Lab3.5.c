#include <stdio.h>

int main(void)

{
int val = 0;
printf("The value of val: %d\n", val);
printf("The value of val: %d\n", val++);
printf("The value of val: %d\n", val);
printf("The value of val: %d\n", ++val);
printf("The value of val: %d\n", val);
printf("The value of val: %d\n", val--);
printf("The value of val: %d\n", val);
printf("The value of val: %d\n", --val);
printf("The value of val: %d\n", val);

int num1, num2;

num1 = 3;
num2 = 5;


printf("Bitwise AND Operation: %d\n", num1&num2);
printf("Bitwise OR Operation: %d\n", num1 | num2);
printf("Bitwise X-OR Operation: %d\n", num1^num2);
printf("Bitwise NOT Operation: %d %d\n", ~num1, ~num2);
printf("Bitwise Right Shift (by 1) Operation: %d %d\n", num1 >> 1, num2 >> 1);
printf("Bitwise Left Shift (by 1) Operation: %d %d\n", num1 << 1, num2 << 1);

return 0;
}
