#include <stdio.h>
//함수의 정의는 main의 앞, 뒤 어디든 상관없음
//함수의 종류 : 매개변수와 반환값의 유무나 개수에 따라 나뉨

//1. 매개변수도 없고, 반환값도 없는 경우 
void fn1(){
	printf("매개변수도 없고, 반환값도 없는 경우 - 함수1\n");
}

//2. 매개변수는 있으나, 반환값이 없는 경우 
void fn2(int a){
	printf("전달한 값 : %d, 제곱결과 : %d\n",a, a*a);
}
//3. 매개변수는 없으나, 반환값이 있는 경우 
int fn3(){
	int a=1004;	//지역변수 a 
	return a/2;	//반환한다는 뜻 
} 
//4. 매개변수와 반환값이 모두 존재하는 경우
float fn4(int su1, int su2, float pi){
	return su1*su2*pi;
} 
void main(){
	fn1();	//1. return이 없는 경우는 void 안에서 printf를 해야함 
	fn2(4);	//2. return이 없는 경우는 void 안에서 printf를 해야함
	int a=fn3();	//3.
	printf("반환값이 있는 데이터 : %d\n", a);	//3.
	float b=fn4(32, 27, 3.14);	//4.
	printf("전달한 값 : %d, %d, 받은 결과값 : %f\n", 32, 27, b);	//4. 
}
