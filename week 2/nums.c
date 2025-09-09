// nums.c
#include <stdio.h>
#include <limits.h> //최대값, 최소값 볼때.

int main(void) {
	// char						1바이트(문자)
	char ch= 'A';
	printf("Char:\n");
	printf("Value: %c\n",ch);
	printf("Max: %d\n",CHAR_MAX); //limit.h의 상수
	printf("Min: %d\n",CHAR_MIN);

	// signed short int			2바이트(정수)
	signed short int sshort = 1234;
	printf("\nsigned short int:\n");
	printf("Value: %d\n", sshort);
	printf("Max: %d\n", SHRT_MAX); //limit.h의 상수
	printf("Min: %d\n", SHRT_MIN);

	// unsigned short int		2바이트(정수)
	unsigned short int ushort = 1234U; // 대문자 U는 부호가 없다는 뜻.
	printf("\nUnsigned short int:\n");
	printf("Value: %d\n", ushort);
	printf("Max: %d\n", USHRT_MAX); //limit.h의 상수
	
	// signed int				4바이트(정수)
	signed int sint = 1234;
	printf("\nsigned int:\n");
	printf("Value: %d\n", sint);
	printf("Max: %d\n", INT_MAX); //limit.h의 상수
	printf("Min: %d\n", INT_MIN);

	// unsigned int				4바이트(정수)
	unsigned short int uint = 12345U; // 대문자 U는 부호가 없다는 뜻.
	printf("\nUnsigned int:\n");
	printf("Value: %d\n", uint);
	printf("Max: %d\n", UINT_MAX); //limit.h의 상수

	// signed long int			4바이트(정수)
	// 보통 4바이트인데 Linux/Unix/Mac에서 8바이트입니다.
	// windows에서 long long하면 8바이트를 쓸수있다.
	signed long int slong = 123456789L; // long은 다른 운영체제에서 다른 크기입니다.
	printf("\nsigned long int:\n");
	printf("Value: %d\n", slong);
	printf("Max: %d\n", LONG_MAX); //limit.h의 상수
	printf("Min: %d\n", LONG_MIN);

	// unsigned long int		4바이트(정수)
	unsigned long int ulong = 12345U; // 대문자 U는 부호가 없다는 뜻.
	printf("\nUnsigned long int:\n");
	printf("Value: %d\n", ulong);
	printf("Max: %d\n", ULONG_MAX); //limit.h의 상수

	// float(항상 부호있음)		4바이트(실수)
	float f = 123.456f; 
	printf("\nfloat:\n");
	printf("Value: %f\n", f);
	
	// double(항상 부호있음)	8바이트(실수)
	double d = 123456.7890123f; 
	printf("\ndouble:\n");
	printf("Value: %.3f\n", d);

	return 0;
}