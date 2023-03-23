#include <stdio.h>

int strlen_1(const char* str);

int main()
{
	char array[] = "text";
	printf("%i",  strlen_1(array));
	
}

int strlen_1(const char* str)
{
	int count = 0;
	for(char i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	return count;


}
