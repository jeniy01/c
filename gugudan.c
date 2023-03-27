#include <stdio.h>
void main(){
	//구구단 
	int i, j;
	for(i=1;i<=9;i++){
		for(j=2;j<=9;j++){
			printf("%d*%d=%d\t", j, i, i*j);
		}
		printf("\n");
	}
	//입력한 숫자의 단을 출력
	int dan;
	printf("\n\n단 입력 : ");
	scanf("%d", &dan); 
	gugudan(dan);	//함수의 호출 
	//모든 함수는 정의가 되어 있어야 하며, 호출되면, 전달값이 인식되어 처리된다. 
}

void gugudan(int su){	//함수의 정의 
	int a;
	for(a=1;a<=9;a++){
		printf("%d*%d=%d\n", su, a, su*a);
	}
}

