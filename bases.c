/*bases.c --以十进制、八进制、十六进制打印十进制数*/
#include<stdio.h>
int main(void)
{
	int x=100;
	printf("decimal= %d;octal= %o;hex= %x\n",x,x,x);
	printf("decimal= %d;octal= %#o;hex= %#x\n",x,x,x);

	return 0;
}
