#include <stdio.h>
void main(){
	int a=0b110101;	//2진수(Binary)대입 - 숫자 앞에 0b로 시작 
	int b=0572;	//8진수(Octal)대입 - 숫자 앞에 0으로 시작 
	int c=0x3e6;	//16진수(heXimal)대입 - 숫자 앞에 0x로 시작 
	int d=365;	//10진수(Decimal)대입 
	printf("2진수 0b110101 -> %d\n", a);
	printf("8진수 0572 -> %d\n", b);
	printf("16진수 0x3e6 -> %d\n", c);
	printf("10진수 365 -> %d\n", d);
	
	printf("10진수 365를 8진수로 출력 : %#o\n", d);	//%#o : 8진수 형식
	printf("10진수 365를 16진수로 출력 : %#x\n", d);	//%#x : 16진수 형식 
}
