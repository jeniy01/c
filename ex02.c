#include <stdio.h>
void main(){
	//실수(부동 소수점수)
	//아주 큰 수나 아주 작은 수에 적합
	//부호, 지수, 가수 등으로 이루어짐 
	float a=3.14159272;	//4byte : 지수 8비트, 가수 23비트 
	double b=274.123478657649;	//8byte : 지수 11비트, 가수 비트 
	long double c=a+b;	//8byte
	char d='a'; //1byte
	unsigned char e='b'; //2byte
	printf("a=%.20f\n", a);
	printf("b=%.20f\n", b);
	printf("c=%lf\n", c);
	printf("d=%c\n", d);
	printf("e=%c\n", e);
	
}
