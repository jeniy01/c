#include <stdio.h>
void main(){
	int a=20, b=30;
	//비트연산자(&,|,^,~,>>,<<)
	/*
	16	8	4	2	1
	1	0	1	0	0
	1	1	1	1	0
	1	0	1	0	0	and(&)
	1	1	1	1	0 	or(|)
	0	1	0	1	0	xor(^)=exclusive OR
	0	1	0	1	1	complement(보수)
	 
	*/
	printf("a&b : %d\n", a&b);	//and -> 20
	printf("a|b : %d\n", a|b);	//or -> 30
	printf("a^b : %d\n", a^b);	//xor -> 10
	printf("~a : %d\n", ~a);	//complement -> -21
	printf("a>>2 : %d\n", a>>2);	//right shift -> 5
	printf("a<<2 : %d\n", a<<2);	//left shift -> 80
	
	//기타연산자
	int rank=a>b ? 1:2; //삼항연산자
	int c=50, d=60; //쉼표연산자
	printf("a>b ? 1:2 => %d\n", rank); //삼항연산의 결과 -> 2 
}
