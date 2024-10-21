#include <stdio.h>
#include <limits.h>

int main ()
{
    int anInteger;
    float aFloat;
    char aCharacter;
    double aDouble;

    /*
    You can use %zu format speacifire instead of %d
    self-study the reasone
    */
    printf("Ssize of  Integer: %d bytes\n", sizeof(anInteger));
    printf("size of Float: %d bytes\n", sizeof(aFloat));
    printf("size of Character: %d bytes\n", sizeof(aCharacter));
    printf("size of Double: %d bytes\n", sizeof(aDouble));
    printf("\n");

    // printing the maximum && minimum values

    printf ("Max value of int: %d\n",INT_MAX);
    printf ("Max value +1 of int: %d\n",INT_MAX +1);

    printf ("Min value of int: %d\n",INT_MIN);
    printf ("Min value -1 of int: %d\n",INT_MIN -1);

    printf ("Max value of char: %d\n",CHAR_MAX);
    printf ("Min value of char: %d\n",CHAR_MIN);

    return 0;
    }
