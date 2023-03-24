#include <stdio.h>
//1~100의 소수 구하기 
#include <stdio.h>
void main(){
	int sw = 0;
	int p;
	for(p=2;p<=100;p++){
		int d;
		for(d=2;d<p;d++){
			if(p%d==0){
				sw = 1;
				break;
			}
		}
		if(!sw){
			printf("%d\n", p);
		}
		sw = 0;
	}
}
