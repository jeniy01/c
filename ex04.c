#include <stdio.h>
void main(){
	int a=50;
	int b=90;
	int c=80;
	int d=70;
	//사칙연산 
	printf("a+b=%d\n", a+b);
	printf("a-b=%d\n", a-b);
	printf("a*b=%d\n", a*b);
	printf("a/b=%f\n", (float)a/b);
	printf("a%%b=%d\n", a%3);	//3은 임의지정 
	//증감식
	printf("후위 증가 a++ : %d\n", a++);
	printf("전위 증가 ++b : %d\n", ++b);
	printf("후위 감소 c-- : %d\n", c--);
	printf("전위 감소 --d : %d\n", --d);
	
	a=50, b=50;
	//대입연산자(=,+=,-=,*=,/=,%=)
	a+=2; b-=2;
	printf("a+=2 -> a값에서 2를 더하여 대입한 결과 : %d\n", a);
	printf("b-=2 -> b값에서 2를 빼서 대입한 결과 : %d\n", b);
	a*=2; b/=2;
	printf("a*=2 -> a값을 2로 곱하여 대입한 결과 : %d\n", a);
	printf("b/=2 -> b값을 2로 나누어 대입한 결과 : %d\n", b); 
}
