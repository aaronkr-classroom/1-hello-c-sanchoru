#include <stdio.h>

int main(void) {
	int age = 45;
	char grade = 'A';
	char name[] = "Aaron"; // char�� ���� �ϳ��� �����������Ƿ� �迭�� �̿�.

	printf("Hello World!~\n");
	printf("My name is %s\n", name);
	printf("I'm %d years old.\n\t", age); // �齽����+t�� tab�� �����ǹ�.
	printf("I want a %c grade.\n", grade);

	return 0;
}