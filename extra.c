#include <stdio.h>
#include <limits.h>

int main(void)
{

printf("signed char: от %d до %d\n", SCHAR_MIN, SCHAR_MAX);
printf("unsigned char: от 0 до %d\n", UCHAR_MAX);
printf("signed short: от %d до %d\n", SHRT_MIN, SHRT_MAX);
printf("unsigned short: от 0 до %d\n", USHRT_MAX);
printf("signed int: от %d до %d\n", INT_MIN, INT_MAX);
printf("unsigned int: от 0 до %u\n", UINT_MAX);
printf("signed long: от %ld до %ld\n", LONG_MIN, LONG_MAX);
printf("unsigned long: от 0 до %lu\n", ULONG_MAX);

return 0;
}
