#include <stdio.h>
void main(){
	//1~100 의 솟수(divisor) 출력하는 프로그램
	//2, 3, 5, 7, 11 ~
	int sw = 0;
	int n;
 	for (n = 2; n <= 100; n++){ 	//1은 소수가 아니므로 생략
		//1보다 크고 n보다 작은 숫자로 나눠 떨어지는지 확인
		int div;
		for (div = 2; div < n; div++){
			if (n % div == 0) { //나눠 떨어졌으면 솟수가 아님
				sw = 1;
				break;	//이미 소수가 아닌 것을 확인했으므로 루프 탈출 
			}
		}
		if (!sw) {		//sw가 0이면 소수이므로 출력
			printf("%d\n", n);  			//소수 출력
		}
		sw = 0; 		//sw 초기화
	}
}
