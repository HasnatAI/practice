#include <stdio.h>
int main(void)
{

int a;
// Value 5 is assigned to a
a = 5;
printf("The value of a is: %d\n", a);
getchar();
// 3 is added to the already existing a
a = a + 3;
printf("The value of a is: %d\n", a);
getchar();
// 2 is subtracted from the already existing a
a = a - 2;
printf("The value of a is: %d\n", a);
getchar();
// 9 is multiplied with the already existing a
a = a * 9;
printf("The value of a is: %d\n", a);
getchar();
// 6 is divided from the already existing a
a = a / 6;
printf("The value of a is: %d\n", a);
getchar();
// The remainder of dividing a by 4
a = a % 4;
printf("The value of a is: %d\n", a);
return 0;
}
