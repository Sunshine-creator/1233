#include<stdio.h>
#include<windows.h>
#include<assert.h>
#if 1
char* strcpy(char* dst, const char* src)
{
	char* p = dst;
	assert(dst);
	assert(src);
	while (*p++ = *src++);
	return (dst);
}
int main()
{
	char* src = "hello world";
	char dst[16];
	assert(dst, src);
	printf("%s\n", dst);
	system("pause");
	return 0;
}
#endif // 0
#if 1
int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	const char* p = "hello world";
	int len = my_strlen(p);
	printf("len = %d\n", len);
}
#endif // 0
int my_strlen(char* s)
{
	char* p = s;
	while (*p != '\0')
	{
		p++;
	}
	return p - s;	
}
int main()
{
	char* s = "hello world";
	int len = my_strlen(s);
	printf("len = %d\n", len);
}
