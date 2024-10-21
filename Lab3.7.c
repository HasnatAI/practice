#include <stdio.h>
int main(void)
{
int pos, neg;
pos = 1;
neg = 0;
// Logical AND Operation
printf("%d && %d: %d\n", neg, neg, neg && neg);
printf("%d && %d: %d\n", neg, pos, neg && pos);
printf("%d && %d: %d\n", pos, neg, pos && neg);
printf("%d && %d: %d\n", pos, pos, pos && pos);
// Logical OR Operation
printf("%d || %d: %d\n", neg, neg, neg || neg);
printf("%d || %d: %d\n", neg, pos, neg | pos);
printf("%d %d: %d\n", pos, neg, pos || neg);
printf("%d || %d: %d\n", pos, pos, pos || pos);
// Logical XOR Operation
printf("%d ^ %d: %d\n", neg, neg, neg ^ neg);
printf("%d ^ %d: %d\n", neg, pos, neg ^ neg);
printf("%d ^ %d: %d\n", pos, neg, pos ^ neg);

printf("%d ^ %d: %d\n", pos, pos, pos ^ neg);

return 0;
}
