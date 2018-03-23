#include <stdio.h>
int main(void)
{
int i1=365, j1=7, i2=12258, j2=23, i3=996, j3=4;


i1 = i1 + j1 - i1 % j1;
i2 = i2 + j2 - i2 % j2;
i3 = i3 + j3 - i3 % j3;
printf("i1: %i\n"
	   "i2: %i\n"
	   "i3: %i\n", i1, i2, i3);
return 0;
}
