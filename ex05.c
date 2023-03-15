#include <stdio.h>
void main(){
	int a=30, b=35, c=32;
	//비교연산자(==,!=,>,>=,<,<=)
	printf("a==b : %d\n", (a==b));	//0이면 false, 1이면 true 
	printf("a!=b : %d\n", (a!=b));
	printf("a>b : %d\n", (a>b));
	printf("a>=b : %d\n", (a>=b));;
	printf("a<b : %d\n", (a<b));
	printf("a<=b : %d\n", (a<=b));
	
	//논리연산자(&&,||,!)
	printf("a>b && b>c : %d %d %d\n", a>b, b>c, (a>b && b>c));	//0이면 false, 1이면 true
	printf("a>b && b<c : %d %d %d\n", a>b, b<c, (a>b && b<c));
	printf("a<b && b>c : %d %d %d\n", a<b, b>c, (a<b && b>c));
	printf("a<b && b<c : %d %d %d\n", a<b, b<c, (a<b && b<c));
	printf("\n");
	printf("a>b || b>c : %d %d %d\n", a>b, b>c, (a>b || b>c));	//0이면 false, 1이면 true
	printf("a>b || b<c : %d %d %d\n", a>b, b<c, (a>b || b<c));
	printf("a<b || b>c : %d %d %d\n", a<b, b>c, (a<b || b>c));
	printf("a<b || b<c : %d %d %d\n", a<b, b<c, (a<b || b<c));
	printf("\n");
	printf("!(a>b) : %d\n", !(a>b));	//0이면 false, 1이면 true
	printf("!(a<b) : %d\n", !(a<b));
	printf("!(a>b || b<c) : %d %d %d\n", a>b, b<c, !(a>b || b<c));
}
