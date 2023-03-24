#include <stdio.h>
//최소공배수, 최대공약수 구하기 
void main(){
	int n1, n2, i, lcm, gcd;
	scanf("%d %d", &n1, &n2);
	for(i=1;i<=n1&&i<=n2;i++){ 
		if(n1%i==0&&n2%i==0){
			gcd=i;
		}
	} 
	lcm=(n1*n2)/gcd;
	printf("최대공약수 : %d\n",gcd);
	printf("최소공배수 : %d\n",lcm);
}
