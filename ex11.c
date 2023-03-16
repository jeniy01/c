#include <stdio.h>
void main(){
	int i;
	int j;
	for(i=1;i<=9;i++){
		for(j=2;j<=9;j++){
			printf("%d*%d=%d\t",j,i,j*i);
		}
		printf("\n");
	}
	//입력한 숫자의 단을 출력
	int dan;
	dan=scanf("%d",&dan);
	gugudan(dan); //함수의 호출 : 변수 이름은 달라도 되지만, 변수의 개수와 타입은 같아야 함 
	//모든 함수는 정의가 되어 있어야 하며, 호출되면 전달값이 인식되어 처리된다. 
}

void gugudan(int su){	//함수의 정의 : 변수 이름은 달라도 되지만, 변수의 개수와 타입은 같아야 함 
	int a;
	int b;
	for(a=1;a<=9;a++){
		printf("%d*%d=%d\n",a,su,a*su);
	}
}
