#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char str[99];
	char* Strptr = str;
	printf("Input String : ");
	scanf("%s", str);
	printf("Output String : ");
	while (*Strptr != '\0') {
		if (*Strptr != *(Strptr + 1)) {
			printf("%c", *Strptr);
		}
		Strptr++;
	}
	return 0;
}