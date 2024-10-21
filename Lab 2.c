#include <stdio.h>

int main(void)

{
int gInt;
float gFloat;
scanf("%f", &gFloat); // Input 46.87

gInt =(int) gFloat;
printf("The given floating number is: %f\n", gFloat);
printf("The given floating number (more accurately) is: %.2f\n",
gFloat);
printf("The integer representation will be: %d\n", gInt);

return 0;
}
