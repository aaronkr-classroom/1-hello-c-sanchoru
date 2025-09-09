#include <stdio.h>

int main(void) {
	int age = 45;
	char grade = 'A';
	char name[] = "Aaron"; // char는 문자 하나만 받을수있으므로 배열을 이용.

	printf("Hello World!~\n");
	printf("My name is %s\n", name);
	printf("I'm %d years old.\n\t", age); // 백슬래쉬+t는 tab과 같은의미.
	printf("I want a %c grade.\n", grade);

	return 0;
}