#include <stdio.h>

char* strcpy_1(char* destination, const char* source);

int main()
{
	char array_1[] = "anun";
	char array_2[sizeof(array_1)];
	char* copy = strcpy_1( array_2, array_1);

	for(char i = 0; copy[i] != '\0'; i++)
	{	
		printf("%c", copy[i]);
	}
	


}

char* strcpy_1(char* array_2, const char* array_1)
{
	for(char i = 0; array_1[i] != '\0'; i++)
	{
		array_2[i] = array_1[i];
	}
	return array_2;


}
