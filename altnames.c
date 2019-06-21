/* altnames.c -- portable names for integer types */
#include<stdio.h>
#include<inttypes.h> // suports portable type
int main(void)
{
	int32_t me32;  // me32 a 32-bit signed variable
	me32=455933945;
	
	printf("First,assume int32_t is int:");
	printf("me32=%d\n", me32);
	printf("Next,let's not make any assumption.\n"); // assumption 假设
	printf("Instead, use a \"macro\" from inttypes.h:");// macro 宏
	printf("me32=% "PRId32"\n",me32  );// PRId32 被定义在inttypes.h中d转换
	return 0;
}
