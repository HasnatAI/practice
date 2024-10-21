#include <stdio.h>
#include <limits.h>

int main ()
{
    int anInteger;
    unsigned aUnsignedInteger;
    short int aShortInteger;
    unsigned short int aUnsignedSshortInteger;
    long int aLongInteger;
    unsigned long int aUnsignedLongInteger;
    long long int aLongLongInteger;
    unsigned long aUnsignedLongLongInteger;

    printf("Size of Integer: %llu bytes\n",sizeof(anInteger));
    printf("Size of Unsingned  Integer: %llu bytes\n",sizeof(aUnsignedInteger));
    printf("Size of Long Integer: %llu bytes\n", sizeof(aLongInteger));
    printf("Size of Unsigned Long Integer: %llu\n",sizeof(aUnsignedLongInteger));
    printf("Size of Long Long Integer: %llu bytes\n",sizeof(aLongLongInteger));
    printf("Size of Unsigned Long Long Integer: %llu\n",sizeof(aUnsignedLongInteger));

    return 0;

}
