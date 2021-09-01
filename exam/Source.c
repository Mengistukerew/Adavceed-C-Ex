#include <stdio.h>
#include <string.h>

int GetStrings() {
	char str[100];

	printf("Enter a string : ");
	GetString(str);

	printf("You entered: %s", str);

	return(0);
}
int GetStringLength(char str[]) {
	int c = 0;
	while (str[c] != '\0')
		c++;

	return c;
}

int CompareString()
{

	char str1[20]; // declaration of char array  
	char str2[20]; // declaration of char array  
	printf("Enter the first string : ");
	scanf("%s", str1);
	printf("Enter the second string : ");
	scanf("%s", str2);
	int c = compare(str1, str2); // calling compare() function  
	if (c == 0)
		printf("strings are same");
	else
		printf("strings are not same");

	return 0;
}


